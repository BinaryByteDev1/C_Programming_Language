#include<stdio.h>
#include<conio.h>
#include<string.h>
// void printstring(char arry[]);
// int charlength( char arry[]);
void salting (char password[]);
int main() {

    // char name[] = {'H' , 'I' , 'L' , 'A' , 'L' , '\0'};
    // printf("%s" , name);
            // char name[] = "HILAL AHMAD GANIE";
            // printf("%s" , name);
            // char name[20];
            // char phoneNo[10];
            // printf("Enter your name :- ");
            // scanf("%s" , &name);
            // printf("Enter your Phone Number :- ");
            // scanf("%s" , &phoneNo);
            // printf("your name is :- %s \n" , name);
            // printf("your Phone Number is :- %s \n" , phoneNo);
            // char lang[] = "Hello-C-Programming-Language";
            // char name[] = "Hilal-Ah-Ganie";
            // printstring(lang);
            // printstring(name);
            // char name[30];
            // printf("Enter Name :- ");
            // scanf("%s" , name);
            // printf("Your name is :- %s" , name);
            // char name[30];
            // printf("Enter Name :- ");
            // gets(name);
            // printf("your Name is :- ");
            // puts(name);
           // char name[40];
            // gets(name);
            // puts(name);
            // char name[40];
            // fgets(name , 40 , stdin);
            // puts(name);
            // char *str = "Hilal";
            // printf("%s" , str);
            // char *strChg = "Hello c Langauge";
            // puts(strChg);
            // strChg = "Hello world...";
            // puts(strChg);
            // strChg = "Hello programmer";
            // puts(strChg);
            // char name[20];
            // fgets(name , 20 , stdin);
            // printf("Length = %d" ,charlength(name));
            // char name[] = "Hilal";
            // // printf("Enter your Name :-");
            // // fgets(name , 20 , stdin);
            // int length = strlen(name);
            // printf("Length = %d" , length);

    // char fname[20];
            // char sname[20];
            // char tname[20];
            // fgets(fname , 20 , stdin);
            // strcpy(sname , fname);
            // printf("Fname = %s \n" , fname);
            // printf("Sname = %s \n" , sname);

    // char Fstr[20] = "Hello World";
        // char Sstr[20] = " Hello C Programming";
        // strcat(Fstr , Sstr);
        // printf("Concat string = %s \n" , Fstr);
        // char Fstr[20];
        // char Sstr[20];
        // fgets(Fstr , 20 , stdin);
        // fgets(Sstr , 20 , stdin);
        // printf("First string = %s" , Fstr);
        // printf("Second string = %s" , Sstr);
        // strcat(Fstr , Sstr);
        // printf("Concatination string = %s" , Fstr);
    // char str1[20] = "H";
    // char str2[20] = "h";
    // if(strcmp(str1 , str2) == 0){
    //     printf("String 1 and string 2 is Equal");
    // }
    // else{
    //     printf("String 1 and string 2 is not Equal");
    // }
    //  return 0;
    // char str[100];
    // char ch;
    // int i = 0;
    // while (ch != '\n')
    // {
    //    scanf("%c" , &ch);
    //    str[i] = ch;
    //    i++;
    // }
    // str[i] = '\0';
    // printf("String = %s" , str);

    // char password[40];
    // printf("Enter your Password :- ");
    // scanf("%s" , &password);
    // char salt[40];
    // printf("Enter your salting :- ");
    // scanf("%s" , &salt);

    // strcat(password , salt);
    // printf("After Salting Password = %s" , password);

    char password[40];
    printf("Enter your Password :- ");
    scanf("%s" , &password);







return 0;
}
void salting (char password[])
{
    char salt[] = "123";
    char newpass[200];

    strcpy(newpass , password);
    strcat(newpass , salt);
    printf("Password = %s" , newpass);
}



        // void printstring(char arry[]){
        //     for (int i = 0; arry[i] != '\0'; i++)
        //     {
        //         printf("%s" , arry[i]);
        //     }
        //     printf("\n");  
        // }
        // int charlength( char arry[]){
        //     int count = 0;
        //     for (int i = 0; arry[i] != '\0'; i++)
        //     {
        //         count++;        
        //     }
        //     return count-1;
// }

