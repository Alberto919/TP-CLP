----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 23.06.2020 19:02:02
-- Design Name: 
-- Module Name: RightShifter_ - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity RightShifter_ is
	generic (Nbits: natural := 4; MaxSft : natural := 2);		-- Número de bits del shifter, Bits para el ammount de shift
	port(
		data_in : in std_logic_vector(Nbits-1 downto 0);		-- Vector a shiftear
		sft_ammount : in std_logic_vector(MaxSft-1 downto 0);	-- Cantidad de bits a shiftear
		sft_right : in std_logic;								-- 1 si shift right, 0 si shift left		
		
		data_out : out std_logic_vector(Nbits-1 downto 0)		-- Salida
	);
end RightShifter_;

architecture Behavioral of RightShifter_ is
begin
	process(data_in, sft_ammount, sft_right)
		variable shift : integer;
	begin
		shift := to_integer(unsigned(sft_ammount));
		if (shift < Nbits) then
			if (sft_right = '1') then
				data_out <= (Nbits-1 downto Nbits-shift => '0') & data_in(Nbits-1 downto shift);
			else
				data_out <= data_in(Nbits-1-shift downto 0) & (shift-1 downto 0 => '0');
			end if;	
		else
			data_out <= (others => '0');
		end if;
	end process;
end Behavioral;
