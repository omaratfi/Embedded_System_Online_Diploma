#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char string[100];
	int i;
	printf("Enter a string: ");
	fflush(stdout);
	gets(string);

	int count = strlen(string);


	for(i = 0; i<count; i++)
	{
		printf("%c",string[count-i-1]);
	}

}
