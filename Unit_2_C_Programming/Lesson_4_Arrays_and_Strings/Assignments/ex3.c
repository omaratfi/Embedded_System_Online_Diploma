#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int mat[10][10];
	int tran[10][10];
	int r, c, i, j;
	printf("Enter rows and column of matrix: ");
	fflush(stdin);fflush(stdout);
	scanf("%d %d", &r, &c);
	printf("\nEnter elements of matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("Enter elements mat[%d][%d]: ", i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("\nEntered Matrix:\n");
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			printf("%d \t",mat[i][j]);
		}
		if(j==c){
			printf("\n");
		}
	}

	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			tran[j][i]=mat[i][j];
		}

	}
	printf("\nTranspose of Matrix:\n");
	for(i=0; i<c; i++){
		for(j=0; j<r; j++){
			printf("%d \t",tran[i][j]);
		}
		if(j==r){
			printf("\n");
		}
	}

}
