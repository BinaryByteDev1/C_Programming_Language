#include<stdio.h>
#include<conio.h>
//  Factorial with Recursion 
int factorial(int n){
	
		if(n == 1 || n == 0) 
		return 1;
		
		int recAns = n * factorial(n-1);
		
		
	return recAns;
	
	
//	int fact = 1;
//	int i;
//	for(i = 2; i <= n; i++){
//		fact = fact * i;
//	}
//	return fact;
//	


}
int main(){
	
	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
	int fact = factorial(n);
	printf("factorial of %d = %d" , n , fact);
	
	
	return 0;
}
