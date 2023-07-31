#include<stdio.h>
#include<conio.h>

int main() {
	int r;
	printf("Enter rows :- ");
	scanf("%d" , &r);
	
	int c;
	printf("Enter rows :- ");
	scanf("%d" , &c);
	
	int arry[r][c];
	int i , j;
	
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			scanf("%d" , &arry[i][j]);
		}
	}
	printf("\n \n");
		
	for(i = 0; i < r; i++){
		for(j = 0; j < c; j++){
			printf("%d \t" , arry[i][j]);
		}
		printf("\n \n");
	}
	
	int trans[c][r];
	printf("\n \n");
	printf("--------------Transpose Matrix------------ \n");
	for(i = 0; i < c; i++){
		for(j = 0; j < r; j++){
			trans[c][r] = arry[j][i];
			printf("%d \t" , trans[c][r]);
		}
		printf("\n \n");
	}


	return 0;
}


