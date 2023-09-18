#include <stdio.h>
#include <stdlib.h>



void print_prime_no(int min, int max)
{

	for(int i=min;i<max;i++)
	{
		char prime = 1;
		for(int j=2;j<i;j++)
		{
			if(i%j==0)
			{
				prime = 0;
				break;
			}

		}
		if(prime)
		{
			printf("%d ",i);
		}

	}
}
int main(void) {

	int min, max;
	printf("Enter minimum number: ");
	fflush(stdout);
	scanf("%d",&min);
	printf("\nEnter maximum number: ");
	fflush(stdout);
	scanf("%d",&max);
	printf("Prime numbers between %d and %d are: ",min,max);
	print_prime_no(min, max);

}
