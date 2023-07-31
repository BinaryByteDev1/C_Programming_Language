#include<stdio.h>
#include<conio.h>

int main() {
				
				//		MAXIMUM NUMBER IN 2-D ARRAY
				//		MAXIMUM NUMBER IN 2-D ARRAY
				
	int arry[2][2];
	int i , j;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			scanf("%d" , &arry[i][j]);
		}
	}
	int max = arry[0][0];
	printf("\n \n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			printf(" %d ", arry[i][j]);
		}
		printf("\n");
		
	}

	
		printf("\n \n");
	
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
			if(max < arry[i][j]);
			max = arry[i][j];
			printf("%d \t" , i,j);
			
		}	
	}
	
		printf("\n \n");
		printf("Maximum Number = %d" , max);
	

				//		MINIMUM NUMBER IN 2-D ARRAY
				//		MINIMUM NUMBER IN 2-D ARRAY

//	int arry[2][2];
//	int i , j;
//	for(i = 0; i < 2; i++){
//		for(j = 0; j < 2; j++){
//			scanf("%d" , &arry[i][j]);
//		}
//	}
//	int min = arry[0][0];
//	printf("\n \n");
//	
//	for(i = 0; i < 2; i++){
//		for(j = 0; j < 2; j++){
//			printf(" %d ", arry[i][j]);
//		}
//		printf("\n");
//		
//	}
//
//		printf("\n \n");
//	
//	for(i = 0; i < 2; i++){
//		for(j = 0; j < 2; j++){
//			if(min > arry[i][j]){
//				min = arry[i][j];
//			}		
//		}	
//	}
//		printf("\n \n");
//		printf("Minimum Number = %d" , min);
//	

	return 0;
	
	
}
