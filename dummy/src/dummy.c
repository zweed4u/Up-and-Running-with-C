/*
 ============================================================================
 Name        : dummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("What up doe?"); //puts line here
	puts("Another line"); //another line here (Challenge? wtf)
	/*
	 * This is a block comment
	 * lol
	 */
	printf("Testing escape strings\nEnter\tTab");
	printf("\nBackslash character \\");
	puts("");
	//Challenge using escape characters
	printf("Hello!\nMy name is \"Blorf.\"\n");

	//values and placeholders
	//printf(placeholder,value)
	printf("Here is a value: %d\n",27);
	printf("Here is a value: %d\n",29);
	printf("Here are the values: %d, %d and %d\n",4,6,8);
	printf("Here is a sum (2+2)= %d\n",2+2);
	printf("Here is a product (56*32)= %d\n",56*32);
	/*
	 * %d integer eg. whole numbers
	 * %s string
	 * %f floating point value
	 * %c single character
	 * %% the percent sign
	 */
	printf("You are a %c %s\n",'C', "programmer"); //single character needs single quote
	printf("I got a %d%% on my exam\n",98); //need placeholder for percent sign

	//Variables!
	/*
	 * int integer whole number 2 or 4 bytes (most of the time 4)
	 * float floating point numbers 4 bytes
	 * char single characters 1 byte
	 * no string datatype C uses array of chars (holy crap)
	 */
	int age;
	age=34;
	printf("the variable age: %d\n",age);
	age=24;
	printf("now the variable age: %d\n",age);
	printf("%d years is %d months!\n",age,age*12);
	printf("%s is %d months old and wants all %c's this semester\n","Zack",age*12,'A');

	char x,y,z;
	x='A';
	y='B';//same as x+1
	z='C';//same as x+2 or y+1
	printf("It's as easy as %c, %c, %c\n",x,y,z);

	float pi;
	pi=22.00/7.0;//need to have decimals so compiler knows we're using floats
	printf("Estimation of pi: %f\n",pi);

	//Need stdio.h included at top
	//putchar() sends char to standard output
	//getchar() fetch char from standard inputs
	//work with integer values - stream oriented
	int c; //weird wtf
	printf("Type a letter: ");
	c = getchar();
	printf("You entered: '%c'.\n",c);
	printf("You typed: '");
	putchar(c);
	putchar('\'');
	putchar('.');
	putchar('\n');
	//printf("'.\n");

	int a,b;
	printf("Type two letters: "); //catches the return carriage character from the first prompt - can over fill the first prompt to show vals
	a=getchar();
	b=getchar();
	printf("You typed: '");
	putchar(a);
	printf("' and '");
	putchar(b);
	printf("'.\n");

	//shows stream oriented
	int aa,bb,cc;
	printf("Type three characters: ");
	aa=getchar();
	putchar(aa);
	bb=getchar();
	putchar(bb);
	cc=getchar();
	putchar(cc);

	return(0);
}
