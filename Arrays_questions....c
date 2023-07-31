#include<stdio.h>
#include<conio.h>

int main(){
	
	
				// 		SECOUND MAXIMUM NUMBER 
				//		SECOUND MAXIMUM NUMBER
	
	int arry[8] = {1 , 2 , 3 , 4 , 5 , 6 , 178 , 18};
	int i;
	int max = arry[0];
	int smax = arry[0];
	for(i = 0; i <= 8-1; i++){
		if(max < arry[i]){
			max = arry[i];
		}	
	}
	
	for(i = 0; i <= 8-1; i++){
		if(smax < arry[i] && arry[i] < max){
			smax = arry[i];
		}
	}
	printf("Second Maximum Number = %d" , smax);
	
	
	
	
	
	
	
						//		Imp Logical 
	
				//  TRIPLETS
				//  TRIPLETS
//	int arry[8] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8};
//	int value = 10;
//	int totalTriplet = 0;
//	int i , j , k;
//	
//	for(i = 0; i <= 8-1; i++){
//		
//		for(j = i+1; j <= 8-1; j++){
//			
//			for(k = j+1; k <= 8-1; k++){
//				if(arry[i] + arry[j] + arry[k] == value){
//					totalTriplet++;
//					printf("(%d , %d , %d ) = %d \n", arry[i] , arry[j] , arry[k] , value);
//				}	
//			}
//		}
//	}
//	printf("Total Pairs = %d" , totalTriplet);
	
	
	
	

				//   PAIRS 
				//   PAIRS
	
//	int arry[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
//	int value = 12;
//	int totalPairs = 0;
//	int i , j;
//	
//	for(i = 0; i <= 10-1; i++){
//		for(j = i+1; j <= 10-1; j++){
//			
//			if(arry[i] + arry[j] == value){
//			
//				totalPairs++;
//				printf("(%d , %d) = %d \n", arry[i] , arry[j] , value);
//			}
//		}
//	}
//	printf("Total Pairs = %d" , totalPairs);
//	
	
	return 0;
}
