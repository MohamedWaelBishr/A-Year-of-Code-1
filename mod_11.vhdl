LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;

ENTITY Mohamed_Rashad IS
	PORT (
		clock : IN BIT;
		q : OUT BIT_VECTOR(3 DOWNTO 0)
	);
END Mohamed_Rashad;

ARCHITECTURE arch OF Mohamed_Rashad IS

BEGIN
	PROCESS (clock)

	VARIABLE count : BIT_VECTOR(3 DOWNTO 0);

	BEGIN
		IF (clock = '1' AND clock'EVENT) THEN
			CASE count IS
				WHEN "0000" => count := "0001";
				WHEN "0001" => count := "0010";
				WHEN "0010" => count := "0011";
				WHEN "0011" => count := "0100";
				WHEN "0100" => count := "0101";
				WHEN "0101" => count := "0110";
				WHEN "0110" => count := "0111";
				WHEN "0111" => count := "1000";
				WHEN "1000" => count := "1001";
				WHEN "1001" => count := "1010";
				WHEN OTHERS => count := "0000";
			END CASE;
		END IF;
		q <= count;
	END PROCESS;
END arch;
