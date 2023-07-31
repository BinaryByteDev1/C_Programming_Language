#include<stdio.h>
#include<conio.h>

int fibo(int n){
	if(n == 1 || n == 2) return 1;
	int ans1 = fibo(n-1); 
	int ans2 = fibo(n-2);
	int ans = ans1 + ans2;
	
	return ans;
	
	
}

int main(){


	int n;
	printf("Enter value of n :- ");
	scanf("%d" , &n);
	

	printf("%d \t" , fibo(n));












	
//	int n;
//	printf("Enter value of n :- ");
//	scanf("%d " , &n);
//	
//	int a = 0;
//	int b = 1;
//	int c;
//	int i;
//	for(i = 1; i <= n; i++){
//		printf("%d \t", a);
//		
//		c = a + b;
//		a = b;
//		b = c;
//	}
	
		
	return 0;
}
