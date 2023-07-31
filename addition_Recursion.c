#include<stdio.h>
#include<conio.h>

int add(int n){
	int s , r;
	if(n == 0) return;
	
		r = n % 10;
		s = r + add(n / 10);
	
	return s;
}
int main(){
	
	int n;
	int sum;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
	sum = add(n);
	printf("sum = %d" , sum);

	return 0;
}
