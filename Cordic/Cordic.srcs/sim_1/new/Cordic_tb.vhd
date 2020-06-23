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

entity Cordic_tb is
--  Port ( );
end Cordic_tb;


architecture Behavioral of Cordic_tb is
    constant nBit:Natural := 15;
    constant iteraciones:Natural := 5;
    constant M_i:STD_LOGIC := '1';
    type calculos is array (iteraciones downto 0) of std_logic_vector(nBit downto 0);     
    signal  sX,sY,sZ: calculos;
    signal angleRot,sinRot,cosRot,zRot: std_logic_vector(nBit downto 0) := (others =>'0');
    signal sx_o, sy_o, sz_o: std_logic_vector(nBit downto 0) := (others =>'0');
      
     constant bArcotan: 
          rVector(15 downto 0):=(
                 0.785398163,
                 0.463647609,
                 0.244978663,
                 0.124354995,
                 0.06241881,
                 0.031239833,
                 0.015623729,
                 0.007812341,
                 0.00390623,
                 0.001953123,
                 0.000976562,
                 0.000488281,
                 0.000244141,
                 0.00012207,
                 6.10352E-05,
                 3.05176E-05
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
   
    UC: for i in 0 to iteraciones-1  generate 
        Iter: Cordic 
            generic map(nBit,i,Conv_fixedPt(bArcotan(i),nBit))                          
            port map(
                    M_i => '1',
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
              variable Ki: real:=1.0;                     
          begin
                for i in 0 to iteraciones-1 loop 
                   Ki:=Ki*(1.0/sqrt(1.0+2.0**(-2*i)));
                end loop;
                 wait for 10 ns;
                   sX(0)  <= Conv_fixedPt(Ki,nBit);
                   sY(0)  <= Conv_fixedPt(0.0,nBit);
                   sZ(0)  <= Conv_fixedPt(math_pi/2.0,nBit);
                   sx_o <= sX(iteraciones); 
                   sy_o <= sY(iteraciones); 
                   sz_o <= sZ(iteraciones); 
                 wait for 10 ns;          
                 wait;
          end process;        
end Behavioral;
