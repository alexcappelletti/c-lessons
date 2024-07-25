#include <stdio.h>

void readFromConsole(){
	char name[10];
	int age;
	printf("Enter your first name and age: \n");
	scanf("%s %d", name, &age);
	printf("You entered: %s %d \n", name, age);
}

void readStringFromConsole(char *outStr, unsigned int maxLengh) {
	printf("Enter a text: \n");
	fgets(outStr, maxLengh, stdin);
	printf("You entered: %s \n", outStr);
}

