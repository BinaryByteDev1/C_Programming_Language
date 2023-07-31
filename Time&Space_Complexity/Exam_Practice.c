#include<stdio.h>
#include<conio.h>
#include<string.h>

int main() {
	
	
//					Swapping using temp variable
//					Swapping using temp variable

//	int num1;
//	printf("Enter value of num1 :- ");
//	scanf("%d" , &num1);
//	int num2;
//	printf("Enter value of num2 :- ");
//	scanf("%d" , &num2);
//	
//	printf("Before Swapping num1 = %d \n" , num1);
//	printf("Before Swapping num2 = %d \n" , num2);
//	
//	int temp = num1; 
//	num1 = num2; 
//	num2 = temp;
//	
//	printf("\n After Swapping num1 = %d \n" , num1);
//	printf("After Swapping num2 = %d \n" , num2);
//	




//					Swapping without using temp variable
//					Swapping without using temp variable

	
//		int num1;
//	printf("Enter value of num1 :- ");
//	scanf("%d" , &num1);
//	int num2;
//	printf("Enter value of num2 :- ");
//	scanf("%d" , &num2);
//	
//	printf("Before Swapping num1 = %d \n" , num1);
//	printf("Before Swapping num2 = %d \n" , num2);
//	
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//	
//	printf("\n After Swapping num1 = %d \n" , num1);
//	printf("After Swapping num2 = %d \n" , num2);


	
	
//		sum of digits
//		sum of digits


//	int num;
//	printf("Enter value of num :- ");
//	scanf("%d" , &num);
//	int r = 0;
//	int sum = 0;
//	int i;
//	for(i = num; i > 0; i = i / 10) {
//		r = i % 10;
//		sum = sum + r;
//	
//	}
//	printf("sum = %d" , sum);





//		Reverse Number
//		Reverse Number


//	int num;
//	printf("Enter value of num :- ");
//	scanf("%d" , &num);
//	int r = 0;
//	int s = 0;
//	int sum = 0;
//	int i;
//	for(i = num; i > 0; ) {
//		r = i % 10;
//		s = s * 10 + r;
//		i = i / 10;
//	
//	}
//	printf("Reverse Number = %d" , s);



//		Plandrome Number


//	int num;
//	printf("Enter value of num :- ");
//	scanf("%d" , &num);
//	
//	int check = num;
//	int rev = 0;
//	int stor = 0;
//	int i;
//	
//	for(i = num; i > 0; ){
//		rev = i % 10;
//		stor = stor * 10 + rev;
//		i = i / 10;
//	}
//	
//	if(check == stor) {
//		printf("%d is a Plandrome Number", num);
//	}
//	else{
//		printf("%d is not a Plandrome Number", num);
//	}

				// Armstrong Number
				// Armstrong Number
//	int num;
//	printf("Enter value of num :- ");
//	scanf("%d" , &num);
//	int r = 0;
//	int arm = 0;
//	int i;
//	int val = num;
//	while(num > 0){
//		r = num % 10;
//		arm = (r * r * r) + arm;
//		num = num / 10;	
//	}
//	if(val == arm){
//		printf("%d is a Armstrong Number", arm);
//	}
//	else{
//		printf("%d is a Not a Armstrong Number", arm);
//	}


	
//		int n;
//	printf("Enter value of n :- ");
//	scanf("%d" , &n);
	
//	int a = 0; 
//	int b = 1;
//	int c;
//	int i;
//	
//	for(i = 0; i <= n; i++){
//		
//		printf("%d \t" , a);
//		c = a + b;
//		a = b;
//		b = c;
//	}



//				Even Odd without (%) operator
//				Even Odd without (%) operator


//		int n;
//	printf("Enter value of n :- ");
//	scanf("%d" , &n);
//	int d = n / 2;
//	int m = d * 2;
//	
//	if(m == n) {
//		printf("%d is Even Number", n);
//		
//	}
//	else{
//		printf("%d is Odd number");
//	}




			// Prime Number
			// Prime Number
			
//	int n;
//	printf("Enter n :- ");
//	scanf("%d" ,&n);
//	int i;
//	if(n == 1 || n == 2){
//		printf("%d is a prime Number", n);
//	}
//	int flag = 0;
//	for(i = 2; i <= n; i++){
//		if(n % 2 == 0){	
//			printf("%d is not a Prime Number" , n);
//			break;
//		}
//		else{
//			flag = 1;
//			break;
//		}
//	}
//	if(flag == 1) {
//		printf("%d is a Prime Number" , n);
//	}
	
	
	
	
	
				// 	REVERSE A STRING
				// 	REVERSE A STRING
				//	REVERSE A STRING
				
//	char string[40];
//	printf("Enter a String :- ");
//	gets(string);
//	char swap;
//	int length = 0;
//	int i;
//	int j;
////	for(length = 0; string[length]; length++);
////		printf("%d \n \n" , length);
//	
//	for(j = 0; string[j] != '\0'; j++){
//		length++;
//	}		
//	for(i = 0; i < length / 2; i++){
//		
//		swap = string[i];
//		string[i] = string[length-1-i];
//		string[length-1-i] = swap;
//	}
//	printf("Reverse String = %s" ,string);
//	
//	


			
				// 	PLANDROMIC A STRING
				// 	PLANDROMIC A STRING
				//	PLANDROMIC A STRING
	
//	char string[50];
//	printf("Enter any string :- ");
//	gets(string);
//	int flag = 0;
//	char swap;
//	int length = 0;
//	int i , j;
//	for(j = 0; string[j] != '\0'; j++){
//		length++;
//	}	
//	for(i = 0; i < length / 2; i++){
//		if(string[i] == string[length-1-i]){
//			flag = 1;
//			break;
//		}
//	}
//		if(flag == 1) 	{
//		printf("%s is a Plandrome string" , string);
//	}	
//		else{
//		printf("%s is not a Plandrome string", string);	
//	}



//		Even numbers series 1-n
//		Even numbers series 1-n
	
		
//		int n;
//		printf("Enter value of n :- ");
//		scanf("%d" , &n);
//		int i;
//		for(i= 1; i <= n; i++){
//			if(i % 2 == 0){
//				printf("%d \t" , i);
//			}
//		}
//		
		
	

//		odd numbers series 1-n
//		odd numbers series 1-n

	
//		int n;
//		printf("Enter value of n :- ");
//		scanf("%d" , &n);
//		int i;
//		for(i= 1; i <= n; i++){
//			if(i % 2 != 0){
//				printf("%d \t" , i);
//			}
//		}


		

//		Convert Celcius To Fehrinite
//		Convert Celcius To Fehrinite
	
		
//	float celcius;
//	printf("Enter Celcius :- ");
//	scanf("%f" , &celcius);
//
//	float Fehrinite = (celcius * 9/5) + 32;
//	printf("%f Clecius into Fehrinite = %f" , celcius ,Fehrinite);
//	
//	
	
	
//		Convert Fehrinite To Celcius
//		Convert Fehrinite To Celcius

//	float Fehrinite;
//	printf("Enter Fehrinite :- ");
//	scanf("%f" , &Fehrinite);
//	
//	float celcius = (Fehrinite - 32) * 5/9;
//	printf("%f Fehrinite into celcius = %f" , Fehrinite , celcius);




//			Check ASCII value of any Numbers
//			Check ASCII value of any Numbers
	
//	int n;
//	printf("Enter value of n :- ");
//	scanf("%d" ,&n);
//	printf("The ASCII value of %d = %c",n, n);
//	
	



//			Check ASCII value of any Numbers
//			Check ASCII value of any Numbers
	
//	char chr;
//	printf("Enter any Character :- ");
//	scanf("%c" , &chr);
//	printf("The ASCII value of %c = %d" , chr , chr);

		
		
			//		Power Function 4
			//		Power Function 
			
//		int n;
//		printf("Enter value of n :- ");
//		scanf("%d" , &n);
//		
//		int pow;
//		printf("Enter value of pow :- ");
//		scanf("%d" , &pow);
//	
//	
//	
//		int val = 1;
//	
//		int i;
//		for(i = 0; i < pow; i++){
//			val = val * n;
//		}
//		printf("Power = %d" , val);

		


					//		Check total Vowels and Consonenets	
					//		Check total Vowels and Consonenets	
					//		Check total Vowels and Consonenets		
//		char string[50];
//		printf("Enter any String :- ");
//		gets(string);
//		int i;
//		int countVowel = 0;
//		int countCon = 0;
//		for(i = 0; string[i] != '\0';i++){
//			if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] =='u'  || 
//				string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] =='U'){
//					countVowel++;	
//			}
//			else{
//				countCon++;
//			}
//		}
//		printf("Total Vowels in string = %d \n" , countVowel);
//		printf("Total Consonents in string = %d" , countCon);
//	
		
	
	
		//	Reverse Multiplication Table
		//	Reverse Multiplication Table
		
		
		
//		int n;
//		printf("Enter value of n :- ");
//		scanf("%d" , &n);
//		
//		int i;
//		for(i = 1; i <= 10; i++) {
//			printf("%d * %d = %d \n", n , i , n * i);
//		}


//		int n;
//		printf("Enter value of n :- ");
//		scanf("%d" , &n);
//		
//		int i;
//		for(i = 10; i >= 1; i--) {
//			printf("%d * %d = %d \n", n , i , n * i);
//		}


		
//		 float radius;
//		 printf("Enter Radius :- ");
//		 scanf("%f" , &radius);
//		 
//		 float area = (3.14 * radius) * radius;
//		
//		printf("Area = %f" ,area);



		printf("Addition  [ + ] \n");
		printf("Subtraction [ - ] \n");
		printf("Multiplication  [ * ] \n");
		printf("Division  [ / ] \n");
		printf("Modules  [ % ] \n");
		char opr;
		printf("Enter the Operator Which operation you want to perform :- ");
		scanf("%c" , &opr);
		
		int num1;
		int num2;
		
		switch(opr){
			case '+' :
				printf("Enter First value :- ");
				scanf("%d" , &num1);
				printf("Enter Second value :- ");
				scanf("%d" , &num2);
				printf("Sum of %d + %d = %d" , num1 , num2 , num1 + num2);
					break;
					
				case '-' :
				printf("Enter First value :- ");
				scanf("%d" , &num1);
				printf("Enter Second value :- ");
				scanf("%d" , &num2);
				printf("Subtraction of %d - %d = %d" , num1 , num2 , num1 - num2);
					break;
				case '*' :
				printf("Enter First value :- ");
				scanf("%d" , &num1);
				printf("Enter Second value :- ");
				scanf("%d" , &num2);
				printf("Multply of %d * %d = %d" , num1 , num2 , num1 * num2);
					break;

				case '/' :
				printf("Enter First value :- ");
				scanf("%d" , &num1);
				printf("Enter Second value :- ");
				scanf("%d" , &num2);
				printf("Divide of %d / %d = %d" , num1 , num2 , num1 / num2);
					break;
				
				case '%' :
				printf("Enter First value :- ");
				scanf("%d" , &num1);
				printf("Enter Second value :- ");
				scanf("%d" , &num2);
				printf("Reminder of %d % %d = %d" , num1 , num2 , num1 % num2);
					break;
		
				default :
					printf("Invilid case.");
					break;
			
		}








	

	return 0;
}
