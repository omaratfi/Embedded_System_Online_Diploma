#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char string[100], c;
	int i, count=0;
	printf("Enter a string: ");
	fflush(stdin);fflush(stdout);
	gets(string);
	printf("\nEnter the character to count:");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);

	for(i = 0; string[i] != '\0'; i++){
		if(c == string[i])
			++count;
	}
	printf("frequency of %c = %d",c,count);
}
