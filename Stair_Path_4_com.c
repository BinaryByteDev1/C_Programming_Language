#include<stdio.h>
#include<conio.h>
int stairPath(int n){
	if(n == 1) return 1;
	if(n == 2) return 2;
	if(n == 3) return 3;
//	if(n == 4) return 4;
	
	int stair1 = stairPath(n-1);
	int stair2 = stairPath(n-2);
	int stair3 = stairPath(n-3);
//	int stair4 = stairPath(n-4);
	
	printf("%d " , stair1);
	printf("%d " , stair2);
	printf("%d " , stair3);
//	printf("%d " , stair4);
	
	printf(" \n \n");
	int stairWays = stair1 + stair2 + stair3;
	
	return stairWays;
	
}
int main(){


	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	
	printf("%d" , stairPath(n));
	
	return 0;
}
