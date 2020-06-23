----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 22.06.2020 00:42:34
-- Design Name: 
-- Module Name: Cordic_tb - Behavioral
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
Use work.utility.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity Cordic_tb is
--  Port ( );
end Cordic_tb;

architecture Behavioral of Cordic_tb is
    constant nBit:Natural := 31;
    constant M_i:STD_LOGIC := '1';
    type calculos is array (32 downto 0) of std_logic_vector(nBit downto 0);     
    signal  sX,sY,sZ: calculos;
    signal  xo,yo,zo: std_logic_vector(nBit downto 0):= (others =>'0');
    signal  xs,ys,zs: std_logic_vector(nBit downto 0):= (others =>'0');
     constant bArcotan: bVector:=(
                     "11001001000011111101101010100010",
                     "01110110101100011001110000010101",
                     "00111110101101101110101111110010",
                     "00011111110101011011101010011011",
                     "00001111111110101010110111011100",
                     "00000111111111110101010101101111",
                     "00000011111111111110101010101011",
                     "00000001111111111111110101010101",
                     "00000000111111111111111110101011",
                     "00000000011111111111111111110101",
                     "00000000001111111111111111111111",
                     "00000000000111111111111111111111",
                     "00000000000011111111111111111111",
                     "00000000000001111111111111111111",
                     "00000000000000111111111111111111",
                     "00000000000000011111111111111111",
                     "00000000000000001111111111111111",
                     "00000000000000000111111111111111",
                     "00000000000000000011111111111111",
                     "00000000000000000001111111111111", 
                     "00000000000000000000111111111111",
                     "00000000000000000000011111111111",
                     "00000000000000000000001111111111",
                     "00000000000000000000000111111111",
                     "00000000000000000000000011111111",
                     "00000000000000000000000001111111",
                     "00000000000000000000000000111111",
                     "00000000000000000000000000011111",
                     "00000000000000000000000000001111",
                     "00000000000000000000000000000111",
                     "00000000000000000000000000000011",
                     "00000000000000000000000000000001" 
                    );  
    
    
    
    component Cordic
        generic( 
                nBit: natural;
                iteracion:natural;
                Const: std_logic_vector    
            );
         Port ( 
                M_i : in STD_LOGIC;
                x_i : in STD_LOGIC_VECTOR (nBit downto 0);
                y_i : in STD_LOGIC_VECTOR (nBit downto 0);
                z_i : in STD_LOGIC_VECTOR (nBit downto 0);
                x_o : out STD_LOGIC_VECTOR (nBit downto 0);
                y_o : out STD_LOGIC_VECTOR (nBit downto 0);
                z_o : out STD_LOGIC_VECTOR (nBit downto 0)
               );
     end component;      
begin
   
    UC: for i in 0 to nBit generate 
        Iter: Cordic 
            generic map(nBit,i,bArcotan(i))                          
            port map(
                    M_i => M_i,
                    x_i => sX(i),
                    y_i => sY(i),
                    z_i => sZ(i),
                    x_o => sX(i+1),
                    y_o => sY(i+1),
                    z_o => sZ(i+1) 
                );     
        end generate;
         process		
              variable result: real;                    
          begin
                 wait for 10 ns;
                  sX(0)  <= "00100110110111010011101101101010";
                  sY(0)  <= "00000000000000000000000000000000";
                  sZ(0)  <= "00000000000000000000000000000000";
                  xs  <= sX(nBit);
                  ys  <= sY(nBit);
                  zs  <= sZ(nBit);
                 wait for 10 ns;
                  sX(0)  <= "00100110110111010011101101101010";
                  sY(0)  <= "00000000000000000000000000000000";
                  sZ(0)  <= "00000000000000000000000000000000";
                  xs  <= sX(nBit);
                  ys  <= sY(nBit);
                  zs  <= sZ(nBit);
                 wait for 10 ns;          
                 wait;
          end process;        
end Behavioral;
