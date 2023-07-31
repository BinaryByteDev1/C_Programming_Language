#include<stdio.h>
#include<conio.h>

int main() {



	int multiD[2][2];
	int i , j , k;
	for(i = 0; i <= 2-1; i++){
		for(j = 0; j <= 2-1; j++){
			printf("Enetr Element of Array :- ");
			scanf("%d", &multiD[i][j]);
		}
	}
	
	for(i = 0; i <= 2-1; i++){
		
		for(j = 0; j <= 2-1; j++) {
			printf("%d \t" , multiD[i][j]);		
		}
		printf(" \n");
	}
	printf(" \n \n");
	
	
	
	for(i = 0; i <= 2-1; i++){
		
		for(j = 0; j <= 2-1; j++) {
			
			for(k = 1; k <= 10; k++){
				printf("%d * %d = %d \n" , multiD[i][j] , k , multiD[i][j] * k);
			}
				printf(" \n \n");		
		}
		printf(" \n \n");
	}
	
	
	
		
	printf(" \n \n");

return 0;

}
