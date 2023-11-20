# include <stdio.h>
void system();

char switchMenu() {
	char menuSelection;

	printf("enter one of the following chars n, e\n n makes a new file and e exits the program\n");
	scanf("%c", &menuSelection);

	switch (menuSelection) {
		case 'n':
			printf("this should make a new file");
			break;

		case 'e': 
			printf("exit the program");
			break;
		default: 
			printf("print a help message for user");
			break;

	}

	return menuSelection ; 
}


int main() {
	system("clear");
	// run function here
	switchMenu();
	return 0;
}

