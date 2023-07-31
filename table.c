#include<stdio.h>
#include<conio.h>
void printtable(int arry[2][10] , int n , int m , int num);
int main() {

    int table[2][10];
    printtable(table , 0 , 10 , 2);
    printtable(table , 1 , 10 , 4);

    for (int i = 1; i <= 10; i++)
    {
        printf("2 * %d = %d \n " , i , table[0][i]);
    }

    printf("\n");
    printf("\n");

      for (int i = 1; i <= 10; i++)
    {
        printf("4 * %d = %d \n" , i , table[1][i]);
    }
}
void printtable(int arry[2][10] , int n , int m , int num){
    for (int i = 1; i <= m; i++)
    {
        arry[n][i] = num * i;  
    } 
}

