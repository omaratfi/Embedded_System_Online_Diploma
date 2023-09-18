#include <stdio.h>
#include <stdlib.h>


void reverse(int size,char s[])
{
	if(size!=0)
	{
		printf("%c",s[size-1]);
		reverse(size-1,s);
	}

}

int main(void)
{

	char s[100];
	int size;
	printf("Enter a sentence: ");
	fflush(stdout);
	gets(s);
	size = strlen(s);
	reverse(size,s);

}
