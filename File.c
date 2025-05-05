#include <stdio.h>

void logMessage(const char* msg) {
	File *file = fopen("log.txt", "a");
	if(file != NULL) {
		fprintf(file, "%s\n", msg);
		fclose(file);
	}
}
int main () {
	printf("Hello World!\n");

	logMessage("Program started.");
	logMessage("Displayed Hello World!");

	return 0;
}
