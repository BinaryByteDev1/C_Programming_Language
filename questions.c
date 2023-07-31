#include<stdio.h>
#include<conio.h>
// int countodd(int arry[] , int n);

int reverse(int arry[] , int n);
void printarry(int arry[] , int n);
int main() {

    // int arry[] = {1 , 2 , 3, 4 , 5 , 6 , 7 , 8, 9 , 10};
    // printf("Total Odd Numbers = %d" , countodd(arry , 10));

    int arry[] = {1 , 2 , 3 , 4, 5 , 6};
    reverse(arry , 6);
    printarry(arry , 6);




}
void printarry(int arry[] , int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t" , arry[i]);
    }
    printf("\n");
    
}
int reverse(int arry[] , int n)
{
    for (int i = 0; i < n/2; i++)
    {
        int firstvalue = arry[i];
        int secondvalue = arry[n-i-1];
        arry[i] = secondvalue;
        arry[n-i-1] = firstvalue;
    }
    

}




// int countodd(int arry[] , int n)
// {
//     int count = 0;
//     for (int i = 0; i < n; i++)
//     {
//         if (arry[i] % 2 != 0)
//         {
//             count++;
//         }
        
        
//     }
//     return count;
    
// }
