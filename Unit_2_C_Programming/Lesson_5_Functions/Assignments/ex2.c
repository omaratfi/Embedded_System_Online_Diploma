#include <stdio.h>
#include <stdlib.h>


int calc_factorial(int num)
{
if(num!=1)
	return num*calc_factorial(num-1);

}

int main(void) {

	int num;
	printf("Enter a positive integer: ");
	fflush(stdout);
	scanf("%d/n",&num);
	if(num<=0)
	{
		printf("Error, Enter a positive integer: ");
		fflush(stdout);
		scanf("%d/n",&num);
	}
	printf("Factorial of %d = %d",num,calc_factorial(num));

}
