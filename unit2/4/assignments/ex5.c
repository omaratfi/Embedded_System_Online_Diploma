#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num, elem, loc, i;
	int arr[100];
	printf("Enter no of elements: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &num);
	for(i = 0; i < num; i++){
		printf("Enter element no %d: ", i+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to be searched: ");
	fflush(stdin);fflush(stdout);
	scanf("%d", &elem);
	for(i = 0; i < num && elem != arr[i]; i++);

	if (i < num){
		printf("Number found at location = %d", i+1);
	}
	else{
		printf("Not found");
	}


}
