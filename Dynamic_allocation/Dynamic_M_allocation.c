#include<stdio.h>
#include<conio.h>
int main() {
	
	int n;
	printf("Enter n :- ");
	scanf("%d" ,&n);
	int arry[n];
	int i;
	for(i = 0; i < n; i++){
		scanf("%d" , &arry[i]);
		
	}
	
	for(i = 0; i < n; i++){
			printf("%d \t" , arry[i]);
		
	}
	
	return 0;
}
