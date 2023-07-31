#include<stdio.h>
#include<conio.h>

int main() {
	int r;
	printf("Enter rows:- ");
	scanf("%d" , &r);
	
	int c;
	printf("Enter rows:- ");
	scanf("%d" , &c);

	int arry[r][c];
	int i , j;
	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			scanf("%d" , &arry[i][j]);
		}
	}
	printf(" \n \n");

	printf("--------------MATRIX--------------- \n");
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			printf("%d \t", arry[i][j]);
		}
		printf(" \n \n");
	}
	
	
			// 1-First Method of Transpose
			// 1-First Method of Transpose
//	printf(" \n \n");
//	printf("--------------TRANSPOSE--------------- \n");
//	for(i = 0; i < r; i++){
//		for(j = 0; j < c; j++){
//			printf("%d \t", arry[j][i]);
//		}
//		printf(" \n \n");
//	}
			
			
			// 2-Second Method of Transpose
			// 2-Second Method of Transpose
			
//		printf("\n \n");
//	printf("--------------TRANSPOSE--------------- \n");
//	int transpose[r][c];
//	for(i = 0; i < c; i++){
//		for(j = 0; j < r; j++){
//			printf("%d \t", arry[j][i]);
//		}
//		printf("\n \n");
//	}
		
		
			// 3-Third Method of Transpose
			// 3-Third Method of Transpose

	for(i = 0; i < r; i++){
		for(j = 0; j < i; j++){
			int temp = arry[i][j];
			arry[i][j] = arry[j][i];
			arry[j][i] = temp;
		}
	}
	printf("\n \n");
	printf("--------------TRANSPOSE--------------- \n");	
		for(i = 0; i < r; i++){
			for(j = 0; j < c; j++){
				printf("%d \t"  , arry[i][j]);
				
			}
			printf("\n \n");
		}

	
	return 0;	
}
