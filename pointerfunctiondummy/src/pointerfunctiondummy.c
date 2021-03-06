/*
 ============================================================================
 Name        : pointerfunctiondummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

char *longer(char *s1, char *s2);//returns character pointer (address of string returned)

int main(void) {
	char *string1="A long time ago";
	char *string2="In a galaxy far, far away";
	char *result;
	result = longer(string1,string2);//passing memory location of strings
	printf("String '%s' is longer.\n",result);

	return EXIT_SUCCESS;
}
char *longer(char *s1, char *s2){
	int len1,len2;
	len1=strlen(s1);
	len2=strlen(s2);
	if(len1>len2){
		return(s1);
	}
	else{
		return(s2);
	}
}
