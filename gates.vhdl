library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Mohamed_Rashad is
    Port ( A : in  STD_LOGIC;     
           B : in  STD_LOGIC;     
           C : in STD_LOGIC;    
			  
           X1 : Out STD_LOGIC;    
           X2 : Out STD_LOGIC;    
           X3 : Out STD_LOGIC;    
           X4 : Out STD_LOGIC;    
           X5 : Out STD_LOGIC;  
           X6 : Out STD_LOGIC;    
			  
end Mohamed_Rashad;

architecture Behavioral of Mohamed_Rashad is
begin
    X1 <= a and b and c;    
    X2 <= a or b or c;    
    X3 <= not (a and b and c);    
    X4 <= not (a or b or c);   
    X5 <= a xor (b xor c); 
    X6 <= a XNOR (b XNOR c);   
 end Behavioral;
