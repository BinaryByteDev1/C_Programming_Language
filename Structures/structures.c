#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	
	
	struct books {
		char bookName[50];
		float bookprize;
		int bookpages;
		char booktitle[50];
	};
	

		struct books Javascript;
	strcpy(Javascript.bookName , "Javascript OOPS");
	Javascript.bookprize = 600.55;
	Javascript.bookpages = 230;
	strcpy(Javascript.booktitle , "Web Designing");
	
	
	printf("Book Name = %s \n" , Javascript.bookName);
	printf("Book Prize = %f \n" , Javascript.bookprize);
	printf("Book Pages = %d \n" , Javascript.bookpages);
	printf("Book Title = %s \n \n \n" , Javascript.booktitle);
	
	
	
		struct books Python;
	strcpy(Python.bookName , "Python");
	Python.bookprize = 600.55;
	Python.bookpages = 230;
	strcpy(Python.booktitle , "Mechine Learning");
	
	
	printf("Book Name = %s \n" , Python.bookName);
	printf("Book Prize = %f \n" , Python.bookprize);
	printf("Book Pages = %d \n" , Python.bookpages);
	printf("Book Title = %s \n" , Python.booktitle);
	
	
	
	
	
//	struct books Javascript;
//	Javascript.bookName[0] = 'j';
//	Javascript.bookName[1] = 'a';
//	Javascript.bookName[2] = 'v';
//	Javascript.bookName[3] = 'a';
//	Javascript.bookName[4] = 's';
//	Javascript.bookName[5] = 'c';
//	Javascript.bookName[6] = 'r';
//	Javascript.bookName[7] = 'i';
//	Javascript.bookName[8] = 'p';
//	Javascript.bookName[9] = 't';
//	Javascript.bookprize = 600.55;
//	Javascript.bookpages = 230;
////	Javascript.booktitle = "Object Oriented Programming in Javascript";
//	
//	
//	printf("%s \n" , Javascript.bookName);
//	printf("%f \n" , Javascript.bookprize);
//	printf("%d \n" , Javascript.bookpages);
////	printf("%s \n" , Javascript.booktitle);
	
	
	
	
	
//	struct pokemon{
//		char name[15];
//		int hp;
//		int speed;
//		int attack;
//
//}pikachu;

		//	First structure
//	struct pokemon pikachu;
//	pikachu.name = 'p';
//	pikachu.hp = 80;
//	pikachu.speed = 120;
//	pikachu.attack = 150;
//	printf("%c \t %d \t %d \t %d \n" ,pikachu.name , pikachu.hp , pikachu.speed , pikachu.attack);

	
//	struct pokemon pikachu;
//	printf("Enter name :- ");
//	scanf("%c" , &pikachu.name);
//	printf("Enter hp :- ");
//	scanf("%d" , &pikachu.hp);
//	printf("Enter speed :- ");
//	scanf("%d" , &pikachu.speed);
//	printf("Enter attack :- ");
//	scanf("%d" , &pikachu.attack);
//	printf("%c \t %d \t %d \t %d \n" ,pikachu.name , pikachu.hp , pikachu.speed , pikachu.attack);



	
//	pikachu.hp = 80;
//	pikachu.speed = 120;
//	pikachu.attack = 150;
//	
//	printf("%c \t %d \t %d \t %d \n" ,pikachu.name , pikachu.hp , pikachu.speed , pikachu.attack);

	






	
	return 0;
}
