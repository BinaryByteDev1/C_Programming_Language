#include<stdio.h>
#include<conio.h>

float square(float num);

int main() {


    int num = 10;
   
    printf("square = %f" , square(num));

        

        
      
      




            // int num;
            // int i;
            // printf("Enter any number :- ");
            // scanf("%d" , &num);
            // if (num == 1 || num == 2)
            // {
            //    printf("%d is not prime number", num);
            // }
            // for(i = 3; i <= num; i ++){
            //      if(num % i == 0) {
            //              printf("%d is not a prime number " ,num);
            //              break;
            //      }
            //      else{
            //              printf("%d is a Prime Number" , num);
            //              break;
            //      }
            // }
    return 0;
}


float square(float num){
    return num * num;
}




