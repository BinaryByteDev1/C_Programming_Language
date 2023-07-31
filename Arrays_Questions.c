#include<stdio.h>
#include<conio.h>
//int Arryfun(int arry[]){
//	int temp;
//	
//	temp = arry[0];
//	arry[0] = arry[1];
//	arry[1] = temp;
//
//	printf("First Element = %d \n" , arry[0]);
//	printf("Second Element = %d \n" , arry[1]);
//
//	return;
//	
//}
int main() {
	
	
	
	int arry[12] = {1 , 2 , 3 , 4 , 5, 6 , 7 , 8  , 9, 10 , 11 , 12};
	int i , n = 5 , count = 0;
	for(i = 0; i <= 12-1; i++){
		if(arry[i] > n){
			count++;
			
			printf("%d \t" , arry[i]);	
		}
	}
		printf("\n Total Elements = %d" , count);
	
	
	

	
				//  Even Numbers Arrays Series
				//  Even Numbers Arrays Series
//	int arry[10] = {1 , 2 , 3 , 4 , 5, 6 , 7 , 8  , 9, 10};
//	int i , even;
//	for(i = 0; i <= 10-1; i++){
//		if(arry[i] % 2 == 0){
//			even = arry[i];	
//				printf("%d \t " , even);
//		}		
//	
//	}
	
				//  Odd Numbers Arrays Series
				//  Odd Numbers Arrays Series
//	int arry[10] = {2 , 3 , 4 , 5, 6 , 7 , 8 , 1 , 9, 4};
//	int i , odd;
//	for(i = 0; i <= 10-1; i++){
//		if(arry[i] % 2 != 0){
//			odd = arry[i];
//			printf("%d \t " , odd);	
//		}	
//	}
	
	
	
	
	
	
	
//	int arry[10] = {2 , 3 , 4 , 5, 6 , 7 , 8 , 1 , 9, 4};
//	int i;
//	for(i = 0; i <= 10-1; i++){
//		if(i % 2 == 0){
//			arry[i] = arry[i] + 10;
//		}
//		else{
//			arry[i] = arry[i] * 2;
//		}
//	}
//	for(i = 0; i <= 10-1; i++){
//		printf("%d \t" , arry[i]);
//	}
	
	
	
	
//	int arry[2] = {10 , 20};
//	printf("First Element = %d \n" , arry[0]);
//	printf("Second Element = %d \n" , arry[1]);
//	
//	printf("\n \n");
//	
//	Arryfun(arry);


//		int min = INT_MIN;
//		int max = INT_MAX;
//		printf("%d \n" , min);
//		printf("%d" , max);


		
		//Minimum value
		//Minimum value
		
//	int arry[8] = {100 , 10 , 88 , 64 , 66, 200 , 5 , 191};
//	int i;
//	int min = arry[0];
//	for(i = 0; i <= 8-1; i++){
//		if(min > arry[i]){
//			min = arry[i];
//		}	
//	}
//	printf("Minimum = %d" , min);
	
	
	
	
		//Maximum value
		//Maximum value
		
//	int arry[8] = {800 , 11 , 21 , 100 , 32 , 4   , 5 , 8 };
//	int i;
//	int n = arry[0];
//	for(i = 0; i <= 7; i++){
//		
//		if(n < arry[i]){
//		n = arry[i];
//		}	
//	}
//	printf("Greatest = %d" , n);
	
		
		
		//Maximum value
		//Maximum value
		
//	int arry[8] = {1 , 2 , 100 , 3 , 4  , 500 , 5 , 8 };
//	int i;
//	for(i = 0; i <= 8-1; i++){
//		
//		if(arry[0] < arry[i]){
//			arry[0] = arry[i];
//		}	
//	}
//	printf("Greatest = %d" , arry[0]);
//	
	
	
	

	
//			calculate product 
//			calculate product 


//	int objects[6] = {1 , 2 , 3 , 4 , 5 , 8};
//	int i;
//	int product = 1;
//	for(i = 0; i <= 6-1; i++){
//		
//		product = product * objects[i];
//		
//	}
//	printf("Total Product = %d" , product);
//	
	
	return 0;	
}
