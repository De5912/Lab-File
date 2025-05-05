#include <stdio.h>
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
#include <time.h>
int main () {
	printf("Hello World!\n");

	printf("Program by: Dev\n");
	time_t now;
	time(&now);
	printf("Compiled on: %s", ctime(&now));

=======

void showMenu() {
	printf("\n==== MENU ====\n");
	printf("1. Say Hello\n");
	printf("2. Show Info\n");
	printf("3. Exit\n");
}
void optionInfo() {
	printf("This feature was added in branch2.\n");
}

int main () {
	printf("Hello World!\n");

	showMenu();
	int choice;
	printf("Enter your choice: ");
	scanf("%d", &choice);

	switch(choice) {
		case 1: printf("Hello, User!\n"); break;
		case 2: optionInfo(); break;
		case 3: printf("Goodbye!\n"); break;
		default: printf("Invalid choice.\n");
	}
>>>>>>> branch2
=======

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

>>>>>>> branch3
=======

void printAsciiBanner() {
	printf("\n*****************************\n");
        printf("*     WELCOME TO GIT LAB    *\n");
        printf("*****************************\n");
}

int main () {
	printAsciiBanner();
	printf("Hello World!");

>>>>>>> branch4
	return 0;
}
