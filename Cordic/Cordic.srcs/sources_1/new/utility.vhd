----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 21.06.2020 18:37:37
-- Design Name: 
-- Module Name: utility - 
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

package utility is

    type rVector is array (integer range<>) of real;
    type iVector is array (integer range<>) of integer;    
    
    function Conv_fixedPt(entrada_real : real; rango : integer) return std_logic_vector;
    function Conv2real (salida_std_logic : std_logic_vector; rango : integer ) return real;
    function Conv_fixedPt(entrada : integer) return std_logic_vector;
    function Conv2rad (entrada : std_logic_vector) return real;
    function Conv2integer (entrada : real) return integer;
    function Conv2real (entrada : integer) return real;
    function Conv2ang (entrada : real) return integer;
end package;
package body utility is   
function Conv_fixedPt(entrada_real : real; rango : integer) return std_logic_vector is
    variable salida_std_logic : std_logic_vector (rango downto 0) ;
begin      
    salida_std_logic := std_logic_vector(conv_signed(integer(entrada_real*(2.0**(rango-3+1))),rango+1));
    return salida_std_logic;
end Conv_fixedPt;

function Conv2real (salida_std_logic : std_logic_vector; rango : integer ) return real is
  variable salida_real : real := 0.0;
begin
  salida_real   := real(conv_integer(salida_std_logic))/(2.0**(rango+1-3));    
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
function Conv_fixedPt(entrada : integer) return std_logic_vector is
    variable salida_std_logic : std_logic_vector (15 downto 0) ;
begin      
    salida_std_logic := std_logic_vector(to_signed(entrada, salida_std_logic'length));
    return salida_std_logic;
end Conv_fixedPt;

function Conv2rad (entrada : std_logic_vector) return real is
variable salida_real : real := 0.0;
begin
    salida_real:= real(conv_integer(entrada));
    salida_real:= salida_real*math_pi/(2.0**(16));           
    return salida_real;
end Conv2rad;

function Conv2ang (entrada : real) return integer is
    variable salida : integer := 0;
    begin
        salida:= integer(entrada*(2.0**(16)/math_pi));          
        return salida;
    end Conv2ang;

function Conv2integer (entrada : real) return integer is
    variable salida: integer := 0;
    variable aux: real := 1.0;
    begin
        aux:= entrada*(2.0**16)/math_pi;
        salida:= integer(aux);       
    return salida;
end Conv2integer;
function Conv2real (entrada : integer) return real is
    variable salida: real := 0.0;
    begin
        salida:= real(entrada);        
        salida:= salida*math_pi/(2.0**16);        
        return salida;
end Conv2real;
end package body;
