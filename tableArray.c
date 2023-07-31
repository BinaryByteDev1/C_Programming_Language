#include<stdio.h>
#include<conio.h>

int main() {
	
	
	int arry[10];
	int i;
	int j;
	for(i = 0;  i <= 10-1; i++){
		printf("Enter %d element :- ", i);
		scanf("%d" , &arry[i]);
	}
	printf("\n \n ");
	for(i = 0; i <= 10-1; i++){
		printf("\n \n ");
		printf("------------------------Table of %d------------------------" , arry[i]);
		printf("\n");
		for(j = 1; j <= 10; j++){
			printf("%d * %d = %d \n" , arry[i] , j , arry[i] * j);
		}
		
	}
	
	
	
	
	
	
	
	
	
	
//	int table[10] = {2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

//	int i;
//	for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[0] , i , table[0] * i);
//	}
//	
//	printf("\n \n");
//	
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[1] , i , table[1] * i);
//	}
//	printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[2] , i , table[2] * i);
//	}
//	printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[3] , i , table[3] * i);
//	}
//	
//		printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[4] , i , table[4] * i);
//	}
//	
//		printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[5] , i , table[5] * i);
//	}
//	
//		printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[6] , i , table[6] * i);
//	}
//	
//	
//		printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[7] , i , table[7] * i);
//	}
//	
//		printf("\n \n");
//		for(i = 1; i <= 10; i++){
//		printf("%d * %d = %d \n", table[8] , i , table[8] * i);
//	}


	
	return 0;
}
