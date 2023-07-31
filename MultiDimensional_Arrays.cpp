#include<stdio.h>
#include<conio.h>


int main() {



	int multiD[3][3];
	int i , j;
	for(i = 0; i <= 3-1; i++){
		for(j = 0; j <= 3-1; j++){
			printf("Enetr Element of Array :- ");
			scanf("%d", &multiD[i][j]);
		}
	}
	int sum = 0;
	for(i = 0; i <= 3-1; i++){
		
		for(j = 0; j <= 3-1; j++) {
			
			printf("%d \t" , multiD[i][j]);	
			sum = sum + multiD[i][j];
		}
		printf(" \n");
	}
	
		
	printf(" \n \n");
	
//	int sum = 0;
//	
//	for(i = 0; i <= 3-1; i++){
//		
//		for(j = 0; j <= 3-1; j++){
//			sum = sum + multiD[i][j];	
//		}	
//	}
	printf("Sum of all 2-D Array elements = %d" , sum);
		
	printf(" \n \n \n");
return 0;

}
