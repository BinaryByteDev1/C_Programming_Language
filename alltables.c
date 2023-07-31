#include<stdio.h>
#include<conio.h>
void printtable(int arry[10][10] , int n , int m , int num);
int main() {

        int table[10][10];
        printtable(table , 0 , 10 , 2);
        printtable(table , 1 , 10 , 3);
        printtable(table , 2 , 10 , 4);
        printtable(table , 3 , 10 , 5);
        printtable(table , 4 , 10 , 6);
        printtable(table , 5 , 10 , 7);
        printtable(table , 6 , 10 , 8);
        printtable(table , 7 , 10 , 9);
        printtable(table , 8 , 10 , 10);

                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("2 * %d = %d \n " , i , table[0][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("3 * %d = %d \n" , i , table[1][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("4 * %d = %d \n" , i , table[2][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("5 * %d = %d \n" , i , table[3][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("6 * %d = %d \n" , i , table[4][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("7 * %d = %d \n" , i , table[5][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("8 * %d = %d \n" , i , table[6][i]);
                                }
                                printf("\n");
                                printf("\n");

                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("9 * %d = %d \n" , i , table[7][i]);
                                }
                                printf("\n");
                                printf("\n");
                                for (int i = 1; i <= 10; i++)
                                {
                                    printf("10 * %d = %d \n" , i , table[8][i]);
                                }
                            return 0; 
                            }

void printtable(int arry[10][10] , int n , int m , int num){
    for (int i = 1; i <= m; i++)
    {
        arry[n][i] = num * i;  
    } 
}

