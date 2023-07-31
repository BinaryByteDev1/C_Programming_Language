#include<stdio.h>
#include<conio.h>

			//Printing Table using Function.
	int table(int n){
		int i;
		for(i = 1; i<= 10; i++){
			printf("%d * %d = %d \n", n , i , n * i);
		}
		return;
	}
			// Factorial of n with Function
	int factorial(int num){
		int i , fact = 1;
		for(i = 1; i <= num; i++){
			fact = fact * i;	
		}
		printf("Fcatorial of %d = %d \n" , num , fact);
	}


int main(){
	
//	int n;
//	printf("Enter the value of n :-");
//	scanf("%d", &n);
//	
//	table(n);

//	int num;
//	printf("Enter the value of num :- \n");
//	scanf("%d", &num);
//	factorial(num);
//	
//		printf("Enter the value of num :- \n");
//	scanf("%d", &num);
//	factorial(num);
//	
//		printf("Enter the value of num :- \n");
//	scanf("%d", &num);
//	factorial(num);
//	
	

	

	

	return 0;
}
