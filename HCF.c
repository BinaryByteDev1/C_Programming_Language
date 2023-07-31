#include<stdio.h>
#include<conio.h>

int min(int a , int b , int c){
	if(a < b && a < c) return a;
	else if(b < a && b < c) return b;
	else return c;
	
}
//int gcd(int a , int b){
//	int i;
//	int hcf1;
//	for(i = 1; i <= min(a , b); i++){
//	
//		if(a % i == 0 && b % i == 0){
//			hcf1 = i;
//		}
//	}
//	return hcf1;	
//}
int main(){
//	
//	int a;
//	printf("Enter value of a :- ");
//	scanf("%d" , &a);
//	
//	int b;
//	printf("Enter value of b :- ");
//	scanf("%d" , &b);
//	
//	int hcf1 = gcd(a , b );
//	printf("The HCF/GCD = %d & %d = %d" , a, b ,hcf1);

		int a;
	printf("Enter value of a :- ");
	scanf("%d" , &a);
	
		int b;
	printf("Enter value of b :- ");
	scanf("%d" , &b);
	
			int c;
	printf("Enter value of c :- ");
	scanf("%d" , &c);
	
	int hcf , i;
	
	for(i = 1; i <= min(a , b , c); i++){
			
		if(a % i == 0 && b % i == 0 && c % i == 0){
				hcf = i;		
		}		
	}
	printf("HCF of %d & %d & %d = %d ", a , b , c ,hcf);
		

	return 0;
}
