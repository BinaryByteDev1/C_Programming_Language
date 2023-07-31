#include<stdio.h>
#include<conio.h>

int main() {
	
//	int arry[12] = {6 , 5 , 8, 9 , 10, 2 , 3 , 4 , 5, 7 , 11 , 11};
//	
//	int i , j; 
//	int count = 0;
//	for(i = 0; i < 12-1; i++) {
//		for(j = i+1; j < 12; j++){
//			if(arry[i] == arry[j]) {
//				printf("Duplicate value  = %d \n" , arry[i]);
//				break;
//			}
//		}
//	}




	int arry[11] = {6 , 1 , 7 , 3 , 2 , 5 , 4 , 8 , 9 , 8 , 10};
	int i; 
	int sum = 0;
	int f = 0;
	int t = 0;
	

	
		for(i = 0; i < 11; i++) {
			
			sum = sum + arry[i];
			f  = 11 * 12 / 2;
			sum = sum - f;
		}
		
	
		
					
		printf("%d \n \n" , sum);
	

		

			

		
	return 0;
}
