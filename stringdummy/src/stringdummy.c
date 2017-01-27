/*
 ============================================================================
 Name        : stringdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>//string manipulation

int main(void) {
	int ch='a';
	printf("Big %c\n",toupper(ch));
	printf("Little %c\n",tolower(ch));
	printf("What begins with %c?\n",ch);


	int acter;
	do{//wait for user input and print out only letters
		acter=getchar();
		if(isalpha(acter)){ //isupper() only print out capitals, islower() only lowercase, isnumber() only numbers, isblank() whitespace
			putchar(acter);
		}
	}
	while(acter!='\n');

	int c;
	do{ //wait for user input - loop through the string array and make all char upper
		c=getchar();
		c=toupper(c);
		putchar(c);
	}
	while(c!='\n');


	return(0);
}