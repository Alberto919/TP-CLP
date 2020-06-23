----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 17.06.2020 23:50:06
-- Design Name: 
-- Module Name: RightShifter_tb - Behavioral
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

entity RightShifter_tb is
--  Port ( );
end RightShifter_tb;

architecture Behavioral of RightShifter_tb is
 component RightShifter is
       generic(
            longitud: Natural;
            shifts:natural
           );
       port(
              entrada : in STD_LOGIC_VECTOR (longitud downto 0);
              salida : out STD_LOGIC_VECTOR (longitud downto 0) 
           );
    end component;

    signal Xshifted, shifted:std_logic_vector(7 downto 0);
       
begin
     
  uut: RightShifter
       generic map(7,0)
       Port Map(
           entrada => Xshifted,
           salida => shifted
       );
   sumador_process: process   
   begin
       Xshifted <= "11111111"; 
       wait for 10 ns;
       Xshifted <= "00111110";       

       wait for 10 ns;
       Xshifted <= "10111110";
       
       wait for 10 ns;
       Xshifted <= "00000000";
       
       wait for 10 ns;
       Xshifted <= "10100000";

       wait for 50 ns;  
       wait;
   end process;
end Behavioral;
