/*
 ============================================================================
 Name        : dummy2.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char password[] = "fuzzy\"\n\t\"wuzzy";//array declaration
	printf("The password is \"%s\"\n",password);
	//scanf(format,&variable) format is a text formatting string uses placeholders - variable is variable name needs prefixed &
	//& is only prefixed to variables name not to a string or array
//	float x;
//	printf("Type a float: ");
//	scanf("%f",&x); //dont forget the &!
//	printf("The float typed was: %f\n",x);
//	char name[15]; //room for 14 characters last index is the null terminator
//	printf("What is your name? ");
//	scanf("%s",name); //& not needed because character array - stops reading at first white space character
//	printf("Your name is %s.\n",name);
	//fgets is better

	char input[64];
	printf("Instructions: ");
	fgets(input,64,stdin);
	puts("Thank you! Here are your instructions:");
	puts(input);



	return(0);
}
