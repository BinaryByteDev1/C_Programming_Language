
#include<conio.h>
#include<stdio.h>

int main(){
	system(" color 57");

	int n;
		
	printf("Enter value of n :- ");
	scanf("%d" , &n);

	int i;
	int  check = 0;
	if(n == 1 || n == 2){
		printf("%d is a prime Number",n);
	}
	for(i = 2; i < n; i++){
		
		if(n % i != 0){
			check = 1;
			break;
		
		}
		else{
			printf("%d is not a prime Number",n);
			break;
		}

	}
	
	if(check == 1){
		printf("%d is a prime Number",n);	
	}
	
	
	return 0;

}
