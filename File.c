#include <stdio.h>
#include <time.h>
int main () {
	printf("Hello World!\n");

	printf("Program by: Dev\n");
	time_t now;
	time(&now);
	printf("Compiled on: %s", ctime(&now));

	return 0;
}
