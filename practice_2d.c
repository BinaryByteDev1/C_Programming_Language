#include<stdio.h>
#include<conio.h>

int main() {
	
			// 		SUM OF TWO MATRICES IMP Q
			// 		SUM OF TWO MATRICES IMP Q
			// 		SUM OF TWO MATRICES IMP Q
			
	int arry[2][2];
	int i , j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%d" , &arry[i][j]);
		}
	}
	printf("\n \n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf(" %d ", arry[i][j]);
		}
		printf("\n");
		
	}
	printf("\n \n");
	int arryb[2][2];
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%d" , &arryb[i][j]);
		}
	}
	printf("\n \n");
		for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf(" %d ", arryb[i][j]);
		}
		printf("\n");
	}
	
			//		SUM ARRAY
			
		printf("\n \n \n");
	int sumArray[2][2];
	
	printf("\n \n");
		for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf(" %d ", arry[i][j] + arryb[i][j]);
		}
		printf("\n \n");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
//	int arry[5][3] = {{1 , 99 , 1} ,{2 , 84 , 4} , {3 , 98 , 2} , {4 , 66 , 5} , {5 , 96 , 3}};
//	int i , j;
//	for(i = 0; i < 5; i++){
//		for(j = 0; j < 3; j++){
//			printf(" %d  " , arry[i][j]);
//		}
//		printf("\n");
//	}
	
	

	return 0;
}
