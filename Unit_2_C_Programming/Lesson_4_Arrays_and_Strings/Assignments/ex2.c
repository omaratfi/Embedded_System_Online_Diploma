#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int NumOfData;
	float average;
	float sum = 0;
	float val[100];
	printf("Enter number of data: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&NumOfData);
	for(int i=0; i<NumOfData; i++){
		printf("\n%d. Enter Number: ",i+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&val[i]);
		sum += val[i];
	}

	average = sum/NumOfData;
	printf("Average = %f", average);

}
