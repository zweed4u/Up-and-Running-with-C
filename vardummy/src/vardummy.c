/*
 ============================================================================
 Name        : vardummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=65;
	printf("The value of a is: %d\n",a);
	//how many bytes are used by type
	int b;
	printf("An int variable occupies %lu bytes of storage\n",sizeof(b));//lu is long unsigned placeholder

	char c;
	printf("An char variable occupies %lu bytes of storage\n",sizeof(c));

	float d;
	printf("An float variable occupies %lu bytes of storage\n",sizeof(d));

	long e;
	printf("An long variable occupies %lu bytes of storage\n",sizeof(e));

	double f;
	printf("An double variable occupies %lu bytes of storage\n",sizeof(f));

	//Where are these variables in memory location
	int mema;
	char memb;
	float memc;
	puts("Memory Locations:");
	printf("memA is at %p\n",&mema);//& gets mem location
	printf("memB is at %p\n",&memb);//..
	printf("memC is at %p\n",&memc);//..

	return EXIT_SUCCESS;
}
