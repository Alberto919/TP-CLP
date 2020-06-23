----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 19.06.2020 18:14:32
-- Design Name: 
-- Module Name: Cordic - Behavioral
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

entity Cordic is
    generic( 
        nBit: Natural:=17;
        iteracion:natural:=4;
        Const: std_logic_vector:="000000000000000000"    
    );
    
    Port ( M_i : in STD_LOGIC;
           x_i : in STD_LOGIC_VECTOR (nBit downto 0);
           y_i : in STD_LOGIC_VECTOR (nBit downto 0);
           z_i : in STD_LOGIC_VECTOR (nBit downto 0);
           x_o : out STD_LOGIC_VECTOR (nBit downto 0);
           y_o : out STD_LOGIC_VECTOR (nBit downto 0);
           z_o : out STD_LOGIC_VECTOR (nBit downto 0));
end Cordic;

architecture Behavioral of Cordic is
     component Mux is
         port(
                 a :in std_logic; 
                 b :in std_logic; 
                 sel :in std_logic;
                 salida :out std_logic     
               );
      end component;
      
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

      component SumadorRestador
            generic (longitud: Natural);
            Port (
               a_i : in STD_LOGIC_VECTOR (longitud downto 0);
               b_i : in STD_LOGIC_VECTOR (longitud downto 0);
               op_i : in STD_LOGIC;
               suma_o : out STD_LOGIC_VECTOR (longitud downto 0);
               carry_o : out STD_LOGIC
            );
     end component;  
     
     signal sX, sY, sZ: std_logic_vector(nBit downto 0):= (others =>'0');
     signal sShiftX, sShiftY: std_logic_vector(nBit downto 0):= (others =>'0');     
     signal sSumX, sSumY, sSumZ: std_logic := '0'; 
     signal sSigA,sSigB,sSigC,sSigD: std_logic:= '0';   
begin
              
     Shift_0: if iteracion=0 generate 
                   sShiftX<=x_i; 
                   sShiftY<=y_i; 
           end generate; 
        
      Shift_N: if iteracion>0 generate 
          ShiftX: RightShifter 
              generic map(nBit, iteracion)  
              port map(
                  entrada => x_i,
                  salida => sShiftX
                ); 
      
          ShiftY: RightShifter 
              generic map(nBit, iteracion)  
              port map(
                  entrada => y_i,
                  salida => sShiftY
                );
           end generate;     
                 
     SumX: SumadorRestador
           generic map(nBit) 
           port map(
               a_i => x_i,
               b_i => sShiftY,
               op_i => sSigA,
               suma_o => sX,
               carry_o => sSumX);
                       
     SumY: SumadorRestador
           generic map(nBit)  
           port map(
                a_i => y_i,
                b_i => sShiftX,
                op_i => sSigB,
                suma_o => sY,
                carry_o => sSumY);
                                                      
     SumZ: SumadorRestador 
           generic map(nBit) 
           port map(
                a_i => z_i,
                b_i => Const,
                op_i => sSigA,
                suma_o => sZ,
                carry_o => sSumZ);
         
     sSigC <= z_i(nBit);
     sSigD <= y_i(nBit);
     sSigA <= sSigB;
                                    
     Sig: Mux
         Port Map(
             a => sSigD,
             b => sSigC,
             sel => M_i,
             salida => sSigA
         );                                        
              
        x_o <= sX;
        y_o <= sY;
        z_o <= sZ;
end Behavioral;
