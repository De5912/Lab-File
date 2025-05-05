#include <stdio.h>

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
	return 0;
}
