#include<stdio.h>
#include<conio.h>

//int swape(int *x , int *y){
//	
//		int temp = *x;
//			*x = *y;
//			*y = temp;
//		
//		printf("a = %d \n" , *x);
//		printf("b = %d \n" , *y);
//	
//	
//}

int main(){
	

//	int a;
//	printf("Enter value a :- ");
//	scanf("%d",&a);
//	
//	int b;
//	printf("Enter value a :- ");
//	scanf("%d",&b);
//	
//	swape(&a , &b);
//	
//	



//	int a = 10;
//	int **p = &a;
//	printf("%p" ,p);
//



//	int a = 100;
//	int *b = &a;
//	printf("%p \n" , b);
//	int **c = &b;
//	printf("%p \n"  ,c);
//	int ***d = &c;
//	printf("%p \n"  ,d);
//	int ****e = &d;
//	printf("%p \n"  ,e);


	int a = 100;
	int *b = &a;
	printf("%d \n" , *b);
	int **c = &b;
	(**c)++;
	printf("%d \n"  ,**c);
	int ***d = &c;
	(***d)++;
	printf("%d \n"  ,***d);
	int ****e = &d;
	(****e)--;
	printf("%d \n"  ,****e);






//	int a = 10;
//	int* b = &a;
//	*b = 20;
//	(*b)--;
//	
//	printf("a = %d \n" , a);
//	printf("*b = %d \n" , *b);


//	int a = 10;
//	int* b = &a;
//	*b = 100;
//	(*b)++;
//
//	printf("%d \n" , *b);





	
//	int a = 100;
//	int* p = &a;
//	
//	
//	printf("%d \n" , *p);
//



//	int a = 10;
//	printf("%p \n" , &a);
//	int* p = &a;
//	printf("%p \n" , p);
//	
//	printf("%p" , &p);


//	int a = 5;
//	int b = 5;
//	int c = 5;
//	int d = 5;
//	printf("%p \n" , &a);
//	printf("%p \n" , &b);
//	printf("%p \n" , &c);
//	printf("%p" , &d);






//	char ch = "H";
//	printf("%p" , &ch);
//	
	return 0;
}
