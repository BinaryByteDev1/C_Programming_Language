#include<stdio.h>
#include<conio.h>

void swap(int a ,int b);
void _swap(int *a , int *b);

int main() {

    int a = 10;
    int b = 20;
    swap(a , b);
    printf("a = %d & b = %d \n" , a ,b );  
                                                        //call by value 
                                                         
                                                        // a = 20 & b = 10 
                                                        // a = 10 & b = 20        

    printf("\n \n");

    int x = 10;
    int y = 20;
    _swap(&x , &y);
    printf("a = %d & b = %d \n" , x ,y );    
                                                        //call by refrence

                                                        // a = 20 & b = 10 
                                                        // a = 20 & b = 10 

    return 0;
}

//call by value 
//call by value 

void swap(int a ,int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d & b = %d \n" , a ,b );
}

//call by refrence
//call by refrence
void _swap(int *a , int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf("a = %d & b = %d \n" , *a ,*b );

}
