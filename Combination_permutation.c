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
int main(){
	
	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
	int r;
	printf("Enter value of r :- ");
	scanf("%d" , &r);
	
//	int nfact = factorial(n); 
//	int rfact = factorial(r);
//	int nrfact = factorial(n-r);
//	int i;
//	for(i = 1; i <= n; i++){	// n factorial
//		nfact = nfact * i;	
//	}
//	printf("nfact = %d \n" , nfact);
//	
//	for(i = 1; i <= r; i++){	// r factorial
//		rfact = rfact * i;	
//	}
//	printf("rfact = %d \n" , rfact);
//	
//	for(i = 1; i <= n-r; i++){	// n-r factorial
//		nrfact = nrfact * i;
//	}
//	printf("n-rfact = %d\n" , nrfact);
//	
	
	
//	int ncr = nfact / (rfact * nrfact);

	int ncr = factorial(n) / (factorial(r) * factorial(n-r));	
	printf("ncr = %d" , ncr);



	return 0;
}
