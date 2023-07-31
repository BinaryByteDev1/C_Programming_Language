#include<stdio.h>
#include<conio.h>

// Function prototypes in  c 
// Function prototypes in  c 

// float square(float side);
float ares_of_circle(float radius);
//  float rectangle(float side_a , float side_b);

int main() {
    // float side;
    // printf("Enter side :- ");
    // scanf("%f" , &side);

    // printf("area of a square = %f" , square(side));


        // float radius;
        // printf("Enter radius :- ");
        // scanf("%f" , &radius);
        // printf("area of a circle = %f", circle(radius));



//         float side_a;
//         printf("Enter side - a :- ");
//         scanf("%f" , &side_a);

//           float side_b;
//         printf("Enter side - b :- ");
//         scanf("%f" , &side_b);

//         printf("Ares of rectange = %f" ,rectangle(side_a , side_b));

            float radius;
            printf("Enter radius :- ");
            scanf("%f" , &radius);

            float area;
            area = ares_of_circle(radius);
            printf("Area of circle  = %f" , area);

   
    
        return 0;

    }


// Function decleration in  c 
// Function decleration in  c 
// Function decleration in  c 





// float square(float side) {
//     return side * side;             
// }

float ares_of_circle(float radius){
     float pi = 3.14159 ;
     float area = pi * radius * radius;
     return area;
}

//  float rectangle(float side_a , float side_b){
//     return side_a * side_b;
//  }
