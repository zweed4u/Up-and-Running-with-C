/*
 ============================================================================
 Name        : pointerchallenge.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char pokey='Z';
	char *p_pokey;
	p_pokey=&pokey;
	printf("Value of pokey: %c\n",pokey);
	printf("Value of pokey: %c\n",*p_pokey);

	printf("Address of pokey: %p\n",&pokey);
	printf("Address of pokey: %p\n",p_pokey);
	return EXIT_SUCCESS;
}
