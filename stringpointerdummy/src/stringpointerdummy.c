/*
 ============================================================================
 Name        : stringpointerdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char *string="I'm just a normal string.\n";
	//char *ptr;
	//ptr=string;//string is already holding mem location
	//int x=0;
	while(*string){//characters(*ptr)
		//putchar(string[x]);
		putchar(*string);//character
		string++;//mem location  lose base address
	}


	return EXIT_SUCCESS;
}
