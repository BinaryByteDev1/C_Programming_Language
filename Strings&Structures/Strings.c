#include<stdio.h>
#include<conio.h>
#include<string.h>
int main() {
	
//	char str[6] = {'H' , 'I' , 'L' , 'A' , 'L'};
//	printf("%c \t", str[1]);
//	printf("%p \n", &str[0]);
//	printf("%p \n", &str[1]);
//	printf("%p \n", &str[2]);
//	printf("%p \n", &str[3]);
//	printf("%p \n", &str[4]);

//	char ch1 = 65;
//	printf("%c \n" , ch1);
//	char ch2 = 97;
//	printf("%c \n" , ch2);
//	
//	char ch3 = 48;
//	printf("%c \n" , ch3);
//	
//	char ch4 = 57;
//	printf("%c" , ch4);
	
	
	
			// Type Casting in C Programming Language
			// Type Casting in C Programming Language
			
//	char ch = 'A';
//	int s = (int)ch;
//	printf("%d \n" , s);
//	
//	int  n = 65;
//	char c = (char)n;
//	printf("%c \n" , c);
	

//	char str[] = {'H','I','L','A','L','\0'};
//	printf("%s " , str);
//
//	char ch = '\0';
//	printf("%d" , ch);
//	
//	int x = 0;
//	char a = (char) x;
//	printf("%c" , a);
	
//	char str[] = {'H','I','L','A','L','\0'};
//	int i;
//	while(str[i] != '\0'){
//		printf("%c" , str[i]);
//		i++;
//	}
	
//	
//	char str[] = "Wel come to C programming Language.";
//	int i;
//	while(str[i] != '\0'){
//		printf("%s" , str[i]);
//	}

	
//	char arr[] = "HELLO WORLD!!!";
//	printf("%s" , arr);
//	int i;
//	while(arr[i] != '\0'){
//		printf("%s" , arr[i]);
//	}
	
//		
//		char str[] = "Hilal Ahmad Ganie is a";
//		int i;
//		int size = 0;
//		for(i = 0; str[i] != '\0'; i++) {
//			printf("%c" , str[i]);
//			size++;
//			
//		}
//		printf("\n \n");
//		printf("size of string = %d", size);


//	
//		char str[3] = "Hilal";
//		printf("%s" , str);



//		char str[10] = "Hilal";
//		printf("%s" , str);

		
		
		
				//  METHOD 1 
				//  METHOD 1 
		
//		char str[] = "Hilal Ahmad Ganie is a";
//		int i;
//	
//		for(i = 0; str[i] != '\0'; i++) {
//			printf("%c" , i[str]);
//	
//			
//		}
		
				//  METHOD 2
				//  METHOD 2
				
				
				
				 
				
//		char str[] = "Hilal Ahmad Ganie is a";
//		int i;
//	
//		for(i = 0; str[i] != '\0'; i++) {
//			printf("%c" , *(str+i));
//	
//			
//		}
		
		
				//  METHOD 3 
				//  METHOD 3 
				
//		char str[] = "Hilal Ahmad Ganie is a";
//		int i;
//	
//		for(i = 0; str[i] != '\0'; i++) {
//			printf("%c" , *(i+str));
//	
//			
//		}
		
		
//		char name[20];
//		char phoneNo[10];
//		
//		printf("Enter Name :- ");
//		scanf("%s" , &name);
//		
//		printf("Enter Phone No :- ");
//		scanf("%s" , &phoneNo);
//		
//		printf("Your Name is %s \n" , name);
//		printf("Your Phone No is %s" , phoneNo);
//		
//		puts("Hello World...");
		
//		char name[20];
//		char phoneNo[10];
//		
//		printf("Enter Name :- ");
//		gets(name);
//		
//		printf("Enter Phone No :- ");
//		gets(phoneNo);
//		
//		printf("Name :- ");
//		puts(name);
//		printf("Phone No :- ");
//		puts(phoneNo);



//		char name[40];
//		printf("Enter name :- ");
//		scanf("%[^\n]s", &name);
//		
//		printf("Name = %s" , name);
//


				//	REVERSE STRING
				//	REVERSE STRING
//		char str[20];
//		puts("Enter a String :- ");
//		gets(str);
//		
//	
//		int size = 0;
//		int k = 0;
//		while(str[k] != '\0'){
//			
//			size++;
//			k++;
//		}
//		int i , j;
//		for(i = 0 , j=size-1; i <= j; i++,j--){
//			
//			char temp = str[i];
//			str[i] = str[j];
//			str[j] = temp;
//			
//		}
//		puts("Reverse string = ");
//		puts(str);
			
			
//		char str[15] = "Hello World.";
//		//char* ptr = &str[0];
//		printf("%p \n", &str[0]);
//		printf("%p \n", &str[1]);
//		printf("%p", str);




//		char str[15] = "Hello World.";
//		char* ptr = str;
//		int i;
//			for(i = 0; ptr[i] != '\0'; i++){
//				printf("%c \t" , ptr[i]);
//			}
	
	
//		char str[15] = "Hello World.";
//		char* ptr = str;
//		int i = 0;
//			while(*ptr != '\0'){
//				printf("%c \t" , *ptr);
//				ptr++;
//				i++;
//			}


		char *ptr = "Hello world";
		printf("%s", *ptr);
	
		

	
		

	








	
	
	return 0;	
}
