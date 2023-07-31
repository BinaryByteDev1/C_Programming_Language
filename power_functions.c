#include<stdio.h>
#include<conio.h>

//int power(int a  , int b){
//	int s = 1;
//	int i;
//	for(i = 1; i <= b; i++){
//
//		s = s * a;
//	}
//		return s;
//}

int power(int a  , int b){
	int po = 1;
	if(b == 0) return 1;

	po = a * power(a , b-1);
	return po;
}
int main(){
	int pow;
	int a;
	printf("Enter value of n :- ");
	scanf("%d" , &a);
	
	int b;
	printf("Enter value of n :- ");
	scanf("%d" , &b);
	
	pow = power(a , b);
	printf("%d raise to power %d = %d", a , b , pow);
//	printf("power = %d" , pow);
//	int pow = power(a , b);
//	printf("Power = %d " , pow);
	return 0;
}
