/*
 ============================================================================
 Name        : allocatechallengedummy.c
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
	char *sto;
	sto=(char *)malloc(sizeof(char)*SIZE);
	if(sto==NULL){
		puts("MEMORY ERROR");
		return(1);
	}
	else{
		printf("%d bytes of memory allocated at location %p.\n",SIZE,sto);
		printf("Type stuff to store in memory: ");
		fgets(sto,SIZE,stdin);//storage location, amount of character, stdin
		printf("You typed:\n%s\n",sto);
	}
	return EXIT_SUCCESS;
}
