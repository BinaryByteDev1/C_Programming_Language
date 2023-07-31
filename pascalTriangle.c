#include<stdio.h>
#include<conio.h>

 int factorial(int x){
	int fact = 1;
	int i;
	for(i = 1; i <= x; i++){
		fact = fact * i;
	}
	return fact;
}
int combination(int n , int r){
	int ncr = factorial(n) / (factorial(r) * factorial(n-r));
	return ncr;
} 

int main(){
	
	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	int spa , row , col;
	

			for(row = 0; row <= n; row++){
		
		for(col = 0; col <= row; col++){
			int icj = combination(row , col);

			printf(" %d ",icj);			
		}	
		
		printf("\n");	

		
		
	}

	
	

	return 0;
}
