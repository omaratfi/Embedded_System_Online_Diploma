#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num, i, AddedNum, loc;
	int arr[100];
	printf("Enter number of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		printf("\nEnter element [%d] of array: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter the element to be inserted: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &AddedNum);
	printf("\nEnter the location: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &loc);
	for(i = num; i >= loc; i--){
		arr[i] = arr[i-1];
	}
	num++;
	arr[loc-1] = AddedNum;
	for(i = 0; i < num; i++){
		printf(" %d",arr[i]);
	}


}
