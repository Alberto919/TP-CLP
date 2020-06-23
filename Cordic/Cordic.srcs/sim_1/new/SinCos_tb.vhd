----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 21.06.2020 19:55:12
-- Design Name: 
-- Module Name: SinCos_tb - Behavioral
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
use std.textio.all;
Use work.utility.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity SinCos_tb is
--  Port ( );
end SinCos_tb;

architecture Behavioral of SinCos_tb is          
    
      constant pEntera:Natural:=2;
      constant nBit:Natural:=17;
      constant iteraciones:Natural:=15;
      
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
                 
     constant bArcotan_18: bVector_18:=(
             "001100100100010000",
             "000111011010110010",
             "000011111010110111",
             "000001111111010110",
             "000000111111111011",
             "000000011111111111",
             "000000010000000000",
             "000000001000000000",
             "000000000100000000",
             "000000000010000000",
             "000000000001000000",
             "000000000000100000",
             "000000000000010000",
             "000000000000001000",
             "000000000000000100",
             "000000000000000010",
             "000000000000000001",
             "000000000000000000"            
             );   

     function Conv_fixedPt(entrada_real : real; rango : integer) return std_logic_vector is
          variable salida_std_logic : std_logic_vector (rango downto 0) ;
      begin      
          salida_std_logic := std_logic_vector(conv_signed(integer(entrada_real*(2.0**(rango+1-pEntera))),rango+1));
          return salida_std_logic;
      end Conv_fixedPt;
   
      function Conv2real (salida_std_logic : std_logic_vector; rango : integer ) return real is
        variable salida_real : real := 0.0;
      begin
        salida_real   := real(conv_integer(salida_std_logic))/(2.0**(rango+1-pEntera));    
        return salida_real;
      end Conv2real;
     
     function Conv2string ( a: std_logic_vector) return string is
       variable b : string (a'length-1 downto 1) := (others => NUL);
     begin
            for i in a'length-1 downto 1 loop
            b(i) := std_logic'image(a((i-1)))(2);
            end loop;
        return b;
    end function; 
    
    component CordicUnrolled is
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
     end component;
    
    signal angleRot,sinRot,cosRot,zRot: std_logic_vector(nBit downto 0) := (others =>'0'); 
    signal ceroIn, K: std_logic_vector(nBit downto 0); 
begin

    ceroIn <= Conv_fixedPt(0.0, nBit);        
    
    R: CordicUnrolled 
            generic map (nBit, iteraciones, bArcotan_18)
            port map(
                M_i => '1',
                x_i => K,
                y_i => ceroIn,
                z_i => angleRot,
                x_o => cosRot,
                y_o => sinRot,
                z_o => zRot
            );
            
     Test: process
           
           variable  angulo,Ki:real;             
           
           -- Salida archivo
           variable linea:line;
           variable salida: string(1 to nBit); 
           file fSen:text open write_mode is "senTest.txt"; 
           file fCos:text open write_mode is "cosTest.txt"; 
        begin
           
          Ki:=1.0; 
           
          for i in 0 to iteraciones loop 
             Ki:=Ki*(1.0/sqrt(1.0+2.0**(-2*i)));
            end 
          loop; 
            
           K<= Conv_fixedPt(Ki,nBit);
           angulo:=math_pi/3.0;
           --while angulo <=math_pi/2.0 loop                   
                wait for 10 ns; 
                angleRot<=Conv_fixedPt(angulo,nBit);             
                wait for 10 ns; 
                salida := Conv2string(sinRot);
                write(linea,salida);
                writeline(fSen,linea); 
                salida := Conv2string(cosRot);
                write(linea,salida);
                writeline(fCos,linea);
                report "SENO: "& real'image(Conv2real(sinRot,nBit));
                report "COSENO: "& real'image(Conv2real(cosRot,nBit));
                angulo:=angulo+(math_pi/10800.0);
                 wait for 10 ns;             
            --end loop; 
           wait;
       end process; 
end Behavioral;
