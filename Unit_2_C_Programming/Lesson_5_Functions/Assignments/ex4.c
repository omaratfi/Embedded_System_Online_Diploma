#include <stdio.h>
#include <stdlib.h>

int power_calc(int base_num, int power_num)
{
	if (power_num == 0)
		return 1;
	else
		return base_num * power_calc(base_num, power_num - 1);
}


int main(void)
{

	int base_num,power_num;
	printf("Enter base number: ");
	fflush(stdout);
	scanf("%d",&base_num);
	printf("\nEnter power number: ");
	fflush(stdout);
	scanf("%d",&power_num);
	printf("%d ^ %d = %d",base_num,power_num,power_calc(base_num,power_num));

}
