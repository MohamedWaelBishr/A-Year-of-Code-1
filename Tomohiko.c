
#include <stdio.h>


int dow(int y, int m, int d) {
	static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
	y -= m < 3;
	return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}

int main(void) {
	const char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday",
				"Thursday", "Friday", "Saturday"};
	printf("%s\n", days[dow(2013, 5, 13)]);
	return 0;
}
