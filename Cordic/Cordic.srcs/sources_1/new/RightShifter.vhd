----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 17.06.2020 23:30:47
-- Design Name: 
-- Module Name: RightShifter - Behavioral
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

entity RightShifter is
    generic( 
        longitud: Natural;
        shifts:natural
    );
    Port ( 
        entrada : in STD_LOGIC_VECTOR (longitud downto 0);
        salida : out STD_LOGIC_VECTOR (longitud downto 0)
        );
end RightShifter;

architecture Behavioral of RightShifter is

begin
    first: for i in longitud downto longitud-shifts+1 generate 
        salida(i)<=entrada(longitud);
    end generate; 
    Other: for i in longitud-shifts downto 0 generate 
        salida(i)<=entrada(i+shifts);
    end generate;
end Behavioral;
