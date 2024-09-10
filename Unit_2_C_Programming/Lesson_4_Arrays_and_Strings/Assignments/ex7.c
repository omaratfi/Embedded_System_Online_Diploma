#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char string[100];
	int i;
	printf("Enter a string: ");
	fflush(stdout);
	gets(string);

	for(i = 0; string[i]!='\0'; i++);
	printf("Length of string: %d", i);
}
