/*
 ============================================================================
 Name        : allocatedummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 1024
int main(void) {
	char c;
	int i;
	float f;
	char buffer[128];
	long unsigned total;
	total=0;
	total=total+sizeof(c);
	total=total+sizeof(i);
	total=total+sizeof(f);
	total=total+sizeof(buffer);
	total=total+sizeof(total);
	printf("This program set aside %ld bytes of storage.\n",total);

	//allocating memory on the fly
	char *sto;//pointer data type matches sizeof() - this points to where the memory has been allocated as specified.
	//type cast malloc so char pointer is being assigned
	sto=(char *)malloc(sizeof(char)*SIZE);//SIZE is how much we need - malloc returns pointer where storage has been allocated in mem.
	if(sto==NULL){//checks to make sure malloc didnt assign a null pointer value
		puts("MEMORY ERROR");
		return(1);
	}
	else{
		printf("%d bytes of memory allocated at location %p.\n",SIZE,sto);
	}

	return EXIT_SUCCESS;
}
