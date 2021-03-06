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
#include <ctype.h>
#include <string.h> //prototyped string functions
int main(void) {
	int ch='a';
	printf("Big %c\n",toupper(ch));
	printf("Little %c\n",tolower(ch));
	printf("What begins with %c?\n",ch);

	putchar('\n');

	//string-string
	char source_string[]="I am a stranger in a strange land";
	char find_me[]="strange";
	if(strstr(source_string,find_me)==NULL){//returns pointer of findme string in sourcestring, null if not found
		printf("Substring '%s' not found in '%s'.\n",find_me,source_string);
	}
	else{
		printf("Substring '%s' found in '%s'.\n",find_me,source_string);
	}


	//string comparison
	char password[9]; //8 long buffer and the null
	printf("Enter you password: ");
	scanf("%8s",password);//8 long to math len of var password - no ampersand needed because string/arrays dont need them
	if(strcmp(password,"secret")==0){//strcmp returns 0 when equal? counterintuitive af
		puts("Matching password");
	}
	else{
		puts("Incorrect");
	}


	//testing concatenation
	char first[]="I would like to go ";
	char second[]="from here to there\n";
	char result[strlen(first)+strlen(second)+1];//making buffer for concatenation result - keeping +1 for null
	strcpy(result,first);//copies first string into result buffer
	strcat(result, second);//appends the second string to the result buffer
	printf("Here is the result of the concatenation:\n%s\n",result);


	char input[64];//room for 63 chars and null terminator
	int inlen;
	printf("Instructions: ");
	fgets(input,64,stdin);
	inlen=strlen(input);
	printf("You typed %d characters.\n",inlen);

	char string[]="Just how long am I?";
	int len;
	len=strlen(string);
	printf("The following string:\n");
	puts(string);
	printf("is %d characters long\n",len);



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
