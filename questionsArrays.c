#include<stdio.h>
#include<conio.h>

int main() {
				
			
	int arry[3][4] = {{0 , 0 , 0 , 0}, {1 , 1 , 1 , 0 },{1 , 1 , 1 , 1}};
	int i , j;


	int maxCount = 0;
	int count = 0;
	int maxIndx = 0;
	
	for(i = 0; i < 3; i++){
			count = 0;
		for(j = 0; j < 4; j++){
			
			printf("%d \t" , arry[i][j]);
		
			if(arry[i][j] == 1) {
				count++;
			}
		}
			if(maxCount < count){
				maxCount = count;
				maxIndx = i;
		}
		printf("\n");
}

	printf("The Maximum Number of 1s = %d \n" , maxCount);
	printf("The Index of Maximum Row = %d" , maxIndx);
	
	
	
	return 0;
}
