#include<stdio.h>
#include<math.h>
#define PI 3.14159265359
#define area(r) (PI * r * r)
//float area(float r) {
//	return PI * r * r;
//}

int main() {
	//	printf("Hello World... \n \n");
	//	int max = __INT_MAX__;
	//	printf("Maximum = %d \n \n" , max);
	//	
	//	int b = INT_MAX;
	//	printf("%d \n " , b);
	//	
	//	int c = INT_MIN;
	//	printf("%d \n" , c);
	//	
	//	
	//	long l = LONG_MAX;
	//	printf("%ld" , l);
	
	
	
		//	Macros in C language
		
	//	printf("%f" , PI);
	
//		printf("%f" , area(5.3));

	
	int n;
	printf("Enter Day :- ");
	scanf("%d" , &n);
	
	
	switch(n){
		
		case 1:
			printf("Today is Monday");
		break;
		case 2:
			printf("Today is Tuesday");
		break;
		
		case 3:
			printf("Today is Wensday");
		break;
		
		case 4:
			printf("Today is Thrusdy");
		break;
		
		case 5:
			printf("Today is Friday");
		break;
		case 6:
			printf("Today is Satarday");
		break;
		case 7:
			printf("Today is Sunday");
		break;
		
		default : 
			printf("Invilid Day...");
			break;
		
		
		
	}
	
	
	
		
		
	
	
	
	
	
	
	
	
	
	
	
		

}
