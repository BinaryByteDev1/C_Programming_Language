#include<stdio.h>
#include<conio.h>
//int sum(int n , int s){
//	if(n == 0){
//		printf("sum = %d", s);
//		return;
//	}	
//	sum(n-1 , s+n);
//}


int add(int n){
	if(n == 0) return;
	
	int sum = n + add(n-1);
	return sum;
}

int main(){
	
	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
//	sum(n , s);

	int sum = add(n);
	printf("sum = %d " , sum);


	return 0;
}
