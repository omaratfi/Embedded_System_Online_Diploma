#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float a[2][2];
	float b[2][2];
	float sum[2][2];
	int r,c;

	printf("Enter elements of first matrix \n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter a[%d][%d]: ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[r][c]);
		}
	}
	printf("\nEnter elements of second matrix \n");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("Enter b[%d][%d]: ",r+1,c+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&b[r][c]);
		}
	}
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			sum[r][c] = a[r][c]+b[r][c];
		}
	}
	printf("Sum of Matrix: ");
	for(r=0;r<2;r++){
		for(c=0;c<2;c++){
			printf("%f\t",sum[r][c]);
			if(c==1)
				printf("\n");
		}

	}

}
