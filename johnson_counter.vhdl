LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
USE  IEEE.NUMERIC_STD.ALL;


ENTITY johnson_counter IS
PORT (
 clk     : IN STD_LOGIC;
 reset_n : IN STD_LOGIC;
 counter : OUT STD_LOGIC_VECTOR( 3 DOWNTO 0)
 );
END johnson_counter;

ARCHITECTURE Arch OF johnson_counter IS
SIGNAL s_counter : UNSIGNED(3 downto 0):=(others => '0');
BEGIN

counter <= STD_LOGIC_VECTOR(s_counter);

P_johnson_ctr : PROCESS(clk)
BEGIN
    IF (reset_n = '0') THEN
            s_counter <= (OTHERS => '0');
    ELSIF( rising_edge(clk) ) THEN
            s_counter(1) <= s_counter(0);
            s_counter(2) <= s_counter(1);
            s_counter(3) <= s_counter(2);
            s_counter(0) <= not s_counter(3);
    END IF;
END PROCESS P_johnson_ctr;
