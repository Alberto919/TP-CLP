----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 17.06.2020 18:34:19
-- Design Name: 
-- Module Name: SumadorRestador_tb - Behavioral
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
use ieee.numeric_std.all;
use ieee.std_logic_arith.all;
use ieee.std_logic_signed.all;
use ieee.math_real.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SumadorRestador_tb is
--  Port ( );
end SumadorRestador_tb;

architecture Behavioral of SumadorRestador_tb is
    component SumadorRestador
        generic (longitud: Natural:=17);
        Port (
           a_i : in STD_LOGIC_VECTOR (longitud downto 0);
           b_i : in STD_LOGIC_VECTOR (longitud downto 0);
           op_i : in STD_LOGIC;
           suma_o : out STD_LOGIC_VECTOR (longitud downto 0);
           carry_o : out STD_LOGIC
        );
     end component;

    function Conv_fixedPt(entrada_real : real; rango : integer) return std_logic_vector is
    variable salida_std_logic : std_logic_vector (rango-1 downto 0) ;
    begin      
        salida_std_logic := std_logic_vector(conv_signed(integer(entrada_real*(2.0**(rango-2))),rango));
        return salida_std_logic;
    end Conv_fixedPt;

    function Conv2real (salida_std_logic : std_logic_vector (17 downto 0); rango : integer ) return real is
      variable salida_real : real := 0.0;
    begin
      salida_real   := real(conv_integer(salida_std_logic))/(2.0**(rango-2));	
      return salida_real;
    end Conv2real;

    --Inputs
    signal sa_i: STD_LOGIC_VECTOR (17 downto 0):= (others =>'0');
    signal sb_i: STD_LOGIC_VECTOR (17 downto 0):= (others =>'0');     
    signal sop_i: std_logic;
    --Outputs
    signal ssuma_o: STD_LOGIC_VECTOR (17 downto 0);
    signal scarry_o: std_logic;
begin
    uut: SumadorRestador 
        PORT MAP (
            a_i => sa_i, 
            b_i => sb_i, 
            op_i => sop_i,
            suma_o => ssuma_o,
            carry_o => scarry_o
        );     
    process		
       variable result: real;					
       begin                
            sa_i <= Conv_fixedPt(0.00024, 18);
            sb_i <= Conv_fixedPt(0.00014, 18);
            sop_i <= '1';   
            result := Conv2real(ssuma_o, 18);
            report "---------------------";
            report "---------------------resultado: "& real'image(result);
            report "---------------------";      
            wait for 10 ns;
            sa_i <= Conv_fixedPt(0.00004, 18);
            sb_i <= Conv_fixedPt(0.00001, 18);
            sop_i <= '0';   
            result := Conv2real(ssuma_o, 18);
            report "---------------------";
            report "---------------------resultado: "& real'image(result);
            report "---------------------";      
            wait for 10 ns;
            sa_i <= Conv_fixedPt(0.00002, 18);
            sb_i <= Conv_fixedPt(0.00003, 18);
            sop_i <= '1';   
            result := Conv2real(ssuma_o, 18);
            report "---------------------";
            report "---------------------resultado: "& real'image(result);
            report "---------------------"; 
            wait;
       end process;
end Behavioral;
