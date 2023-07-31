#include<stdio.h>
#include<conio.h>

int main() {
	int n;
	printf("Enter rows and Columns:- ");
	scanf("%d" , &n);

	int arry[n][n];
	int i , j;
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			scanf("%d" , &arry[i][j]);
		}
	}


	//		transpose
	int temp;

	for(i = 0; i < n; i++){
		for(j = 0; j < i; j++){
			temp = arry[i][j];
			arry[i][j] = arry[j][i];
			arry[j][i] = temp;
			
		}
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d \t" , arry[i][j]);
			
		}
		printf("\n \n");
	}

	
		// Rotate 90 deg
		// Rotate 90 deg
	printf("\n \n");

	for(i = 0; i < n; i++){
		int j = 0;
		int k = n-1;

		for(j = 0; j < k; j++){
		
			int temp = arry[i][j];
			arry[i][j] = arry[i][k];
			arry[i][k] = temp;
		
			k--;
		}
	
	}
		printf("\n \n");
	
	
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
			printf("%d \t" , arry[i][j]);
			
		}
		printf("\n \n");
}


	return 0;	
}
