/*
 ============================================================================
 Name        : placeholderdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char right[]="right";
	char left[]="left";
	printf("%20s\n",right); //20 is the output width rjust
	printf("%-20s\n",left); //20 is the output width ljust because of '-' sign
	return EXIT_SUCCESS;
}
