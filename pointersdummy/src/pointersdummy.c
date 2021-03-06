/*
 ============================================================================
 Name        : pointersdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//pointers must be initialized!!!
	//pointer type must match the variable it references
	int pokey=987;
	int *p;
	p=&pokey;//intialize pointer
	printf("The address of `pokey` is: %p using &pokey\n",&pokey);//& fetches address directly
	printf("The address of `pokey` is: %p using pointer p\n",p);//address fetched with pointer
	printf("The value of `pokey` is: %d using pokey\n",pokey);//directly
	printf("The value of `pokey` is: %d using *p\n",*p);//*gets value of the pointer at the location referenced

	return EXIT_SUCCESS;
}
