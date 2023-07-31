#include<stdio.h>
#include<conio.h>
int stairPath(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	
	int stair1 = stairPath(n-1);
	int stair2 = stairPath(n-2);
	printf("%d " , stair1);
	printf("%d " , stair2);
	
	printf(" \n \n");
	int stairWays = stair1 + stair2;
	
	return stairWays;
	
}
int main(){


	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
	printf("%d" , stairPath(n));
	
	return 0;
}
