#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main() {
	
	
//	int *ptr = (int *) malloc(100 * sizeof(int));
//	printf("%d" , ptr);
//	int a = sizeof(a);
//	printf("%d \n" , a);
//	char c = sizeof(c);
//	printf("%d \n" , c);
//	float f;
//	printf("%d \n" ,sizeof(f));
//	double d;
//	printf("%d" ,sizeof(d));

	
	
	
//	int* ptr = (int*) malloc(100 * 4);
//	ptr++;
//	printf("%d \n" , *ptr);
//	
//	int* ptrr = (int*) calloc(100 , 4);
//	ptrr++;
//	printf("%d" , *ptrr);


//	int n;
//	printf("Enter n :- ");
//	scanf("%d" ,&n);
//	int i;
//	for(i = 1; i <= n; i++) {
//		printf("%d \t" , i);
//	}

//	int n;
//	printf("Enter n :- ");
//	scanf("%d" ,&n);
//	
//	int arry[n];
//	int i;
//	for(i = 0; i < n; i++) {
//		scanf("%d" , &arry[i]);
//	} 
//	for(i = 0; i < n; i++) {
//		printf("%d \t" , arry[i]);
//	} 



//	int n;
//	printf("Enter n :- ");
//	scanf("%d"  , &n);
//	int *ptr = (int *) malloc(n * sizeof(int));
//	int *p = ptr;
//	
//	int i;
//	for(i = 1; i <= n; i++) {
//		scanf("%d" , &(*ptr));
//		ptr++;
//	}
//	
//	for(i = 1; i <= n; i++) {
//		printf("%d \t" , *p);
//		p++;
//	}
	
	

//	int *ptr = (int *) malloc(10 * sizeof(int));
//	int *p = ptr;
//	p++;
//	free(ptr);
	
	
//	int arry[8];
//	int i;
//	
//	for(i = 0; i < 5; i++) {
//		scanf("%d" , &arry[i]);
//	}
//	
//	for(i = 0; i < 5; i++) {
//		printf("%d \t" , arry[i]);
//	}
//	
//	printf("\n \n");
//	
//	int max = arry[0];
//	for(i = 0; i < 5; i++) {
//		
//		if(arry[i] > max){
//			max = arry[i];
//		}
//	}
//	printf("Maximum = %d" , max);




	int arry[8];
	int i;
	
	for(i = 0; i < 8; i++) {
		scanf("%d" , &arry[i]);
	}
	
	for(i = 0; i < 8; i++) {
		printf("%d \t" , arry[i]);
	}
	
	int min = arry[0];
	
	for(i = 0; i < 8; i++){
		if(arry[i] < min){
			min = arry[i];
		}
	}
	printf("Minimum = %d" , min);

	

	
	



	
	
	
	return 0;	
}
