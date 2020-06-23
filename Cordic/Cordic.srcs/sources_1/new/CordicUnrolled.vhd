----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 19.06.2020 20:58:04
-- Design Name: 
-- Module Name: CordicUnrolled - Behavioral
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

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
Use work.utility.all;

entity CordicUnrolled is
    generic(nBit: Natural;
            iteracion:natural;
            arctan: bVector_18
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
end CordicUnrolled;

architecture Behavioral of CordicUnrolled is
    type calculos is array (iteracion downto 0) of std_logic_vector(nBit downto 0);     
    signal  sX,sY,sZ: calculos;
    
    component Cordic
        generic( 
                nBit: Natural;
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
    UC: for i in 0 to iteracion-1 generate 
        Iter: Cordic 
            generic map(nBit,i,arctan(i))                          
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
        sX(0)  <= x_i;
        sY(0)  <= y_i;
        sZ(0)  <= z_i;
        x_o <= sX(iteracion); 
        y_o <= sY(iteracion); 
        z_o <= sZ(iteracion); 
end Behavioral;
