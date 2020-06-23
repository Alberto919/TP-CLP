----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 17.06.2020 17:00:58
-- Design Name: 
-- Module Name: Sumador1b_tb - Behavioral
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

entity Sumador1b_tb is
--  Port ( );
end Sumador1b_tb;

architecture Behavioral of Sumador1b_tb is
component Sumador1b
    Port (
       a_i : in STD_LOGIC;
       b_i : in STD_LOGIC;
       carry_i : in STD_LOGIC;
       suma_o : out STD_LOGIC;
       carry_o : out STD_LOGIC  
    );
 end component;

    --Inputs
    signal sa_i: std_logic;
    signal sb_i: std_logic;   
    signal scarry_i: std_logic;   

    --Outputs
    signal ssuma_o: std_logic;
    signal scarry_o: std_logic;
begin  
    uut: Sumador1b
       Port Map(
           a_i=> sa_i,
           b_i=> sb_i,
           carry_i=> scarry_i,
           suma_o=> ssuma_o,
           carry_o=> scarry_o
       );

   sumador_process: process
   begin      
        sa_i <= '0';
        sb_i <= '0';
        scarry_i <= '0';

        wait for 10 ns;
        sa_i <= '1';
        sb_i <= '0';
        scarry_i <= '0';

        wait for 10 ns;
        sa_i <= '0';
        sb_i <= '1';
        scarry_i <= '0';

        wait for 10 ns;
        sa_i <= '1';
        sb_i <= '1';
        scarry_i <= '0';
        

        wait for 10 ns;
        sa_i <= '0';
        sb_i <= '0';
        scarry_i <= '1';

        wait for 10 ns;
        sa_i <= '1';
        sb_i <= '0';
        scarry_i <= '1';

        wait for 10 ns;
        sa_i <= '0';
        sb_i <= '1';
        scarry_i <= '1';

        wait for 10 ns;
        sa_i <= '1';
        sb_i <= '1';
        scarry_i <= '1';
 		wait for 10 ns;        
        wait;
    end process;    

end Behavioral;