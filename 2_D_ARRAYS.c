#include<stdio.h>
#include<conio.h>


int main() {


	 
	int i , j;
	int row;
	printf("Enter the Number of Rows :- ");
	scanf("%d" , &row);
	int col;
	printf("Enter the Number of Columns :- ");
	scanf("%d" , &col);
	
	int arry[row][col];
	
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			
			scanf("%d", &arry[i][j]);
		}
	printf("\n");
	} 
	for(i = 0; i < row; i++){
		for(j = 0; j < col; j++){
			printf(" %d ", arry[i][j]);
		}
		printf("\n");
	
	} 
	
	
	
//	int arr[2][2] = {{1 , 2} , {3 , 4}};
//	printf("%d \t" ,arr[0][0]);
//	printf("%d \t \n" ,arr[0][1]);
//	printf("%d \t" ,arr[1][0]);
//	printf("%d \t" ,arr[1][1
	

	
////	int multiD[4][4];
////	
////	multiD[0][0] = 10;
////	multiD[0][1] = 10;
////	multiD[0][2] = 10;
////	multiD[0][3] = 10;
////	
////	multiD[1][0] = 10;
////	multiD[1][1] = 10;
////	multiD[1][2] = 10;
////	multiD[1][3] = 10;
////	
////	multiD[2][0] = 10;
////	multiD[2][1] = 10;
////	multiD[2][2] = 10;
////	multiD[2][3] = 10;
////	
////	multiD[3][0] = 10;
////	multiD[3][1] = 10;
////	multiD[3][2] = 10;
////	multiD[3][3] = 10;
////	
//	printf("%d \t" ,multiD[0][0]);
//	printf("%d \t" ,multiD[0][1]);
//	printf("%d \t" ,multiD[0][2]);
//	printf("%d \t \n \n" ,multiD[0][3]);
////	
////	printf("%d \t" ,multiD[1][0]);
////	printf("%d \t" ,multiD[1][1]);
////	printf("%d \t" ,multiD[1][2]);
////	printf("%d \t \n \n" ,multiD[1][3]);
////	
////	printf("%d \t" ,multiD[2][0]);
////	printf("%d \t" ,multiD[2][1]);
////	printf("%d \t" ,multiD[2][2]);
////	printf("%d \t \n \n" ,multiD[2][3]);
////	
////	printf("%d \t" ,multiD[3][0]);
////	printf("%d \t" ,multiD[3][1]);
////	printf("%d \t" ,multiD[3][2]);
////	printf("%d \t \n \n" ,multiD[3][3]);
	
	
	
	
	return 0;	
}
