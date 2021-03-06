/*
 ============================================================================
 Name        : shoutingdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void shouting(char *input);//pointer var as arg - mem location (address of var as arg)
char *encrypt(char *input);

int main(void) {
	char *instructions="Deliver the package to Berlin";//contents of instructions
	printf("Here are your encrypted instructions:\n%s\n",encrypt(instructions));//passing the address of var
	putchar('\n');



	char string[64];
	printf("Type some text: ");
	fgets(string,64,stdin);
	printf("You typed: %s",string);
	shouting(string);
	printf("Shouting: %s",string);
	return EXIT_SUCCESS;
}
void shouting(char *input){
	while(*input){//contents of input
		*input=toupper(*input);//make it uppercase
		input++;//increment memlocation
	}
}

char *encrypt(char *input){
	static char output[64]; //retains content of the output array - var used here are local so need static to keep var
	//doesnt need for single vals - functions are meant to return single vals
	int x=0;
	while(*input){//while there is more content of the string mem location
		if(isalpha(*input)){//if it is a letter
			output[x]=*input+1;//increment that letter by 1 - shift cipher (caesar n=1)
		}
		else{
			output[x]=*input;
		}
		input++;//increment the mem location
		x++;//increment index
	}
	return(output); //return char
}
