library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity SR_latch is
    Port ( S : in    STD_LOGIC;
           R : in    STD_LOGIC;
           Q : out   STD_LOGIC);
end SR_latch;

architecture Behavioral of SR_latch is
signal notQ : STD_LOGIC;
begin

Q    <= R nor notQ;
notQ <= S nor Q;

end Behavioral;

