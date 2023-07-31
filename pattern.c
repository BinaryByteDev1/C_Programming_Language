#include<stdio.h>
#include<conio.h>

int main(){

    int n;
    printf("Enter the value of n :- ");
    scanf("%d" ,  &n);

    for(int row = 1; row <= n; row++)
    {

        for(int col = 1; col <= n-row; col++){
                printf("    ");

        }

        for(int str1 = 1; str1 <= row; str1++){

            if(row == 1 || row == n || str1 == 1 || str1 == row){
                printf("  * ");
            }
            else{
                printf("    ");
            }
        }
        for(int str2 = 1; str2 <= row-1; str2++){

        if(row == n || str2== row-1){
            printf("  * ");
        }
        else{
            printf("    ");
        }

        }
        printf(" \n");
        printf(" \n");
    }
}
