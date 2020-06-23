----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 17.06.2020 23:38:50
-- Design Name: 
-- Module Name: Mux_tb - Behavioral
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

entity Mux_tb is
--  Port ( );
end Mux_tb;

architecture Behavioral of Mux_tb is
 component Mux is
        port(
              a :in std_logic; 
              b :in std_logic; 
              sel :in std_logic;
              salida :out std_logic     
            );
     end component;

 signal a,b,sel,salida:std_logic := '0';
    
begin
   test: Mux
        Port Map(
            a => a,
            b => b,
            sel => sel,
            salida => salida
        );

    uut: process
    begin 
    	a <= '0';
        b <= '1';
        wait for 10 ns;        
        sel <= '1';
        
        wait for 10 ns;
        sel <= '0';
        
        wait for 10 ns;
        sel <= '1';
        
        wait for 50 ns;  
        wait;
    end process;
end Behavioral;
