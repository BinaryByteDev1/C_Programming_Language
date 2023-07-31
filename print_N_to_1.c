#include<stdio.h>
#include<conio.h>
//int decreasing(int n){
//	if(n == 0)
//	return;
//	printf("%d \t" , n);
//	decreasing(n-1);
//}
//
//int good(int n ){
//	if(n == 0)
//	return 0;
//	printf("Good Morning...\n");
//	int print = n = (good(n-1));
//	
//}

//void greeting(int n){
//	
//	if(n == 0)
//	return;
//	printf("Good Morning...\n");
//	greeting(n-1);
//	
//}






//int increasing(int n , int i){
//	
//	if(i > n) return;
//	printf("%d \t" , i);
//	
//	increasing(n ,i+1);
//	
//}


//int increasing(int n){
//	
//	if(n == 0) return;	 // base case
//	increasing(n-1);	 // Call 
//	printf("%d \t" , n);	// Code
//	
//	
//}
int incDec(int n){
	
	if(n == 0) return;	
	printf("%d \t" , n);	 
	incDec(n-1);	 
	printf("%d \t" , n);	
	
	
}

int main(){
	
	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
//	increasing(n , 1);
	
//	good(n);

//	greeting(n);

//	increasing(n);
	incDec(n);
	
	
	return 0;
}
