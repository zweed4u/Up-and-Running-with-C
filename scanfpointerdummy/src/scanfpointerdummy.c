/*
 ============================================================================
 Name        : scanfpointerdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void minus10(int *v);
int main(void) {
	int value=100;
	printf("Value is: %d\n",value);
	minus10(&value);//pass address
	printf("Value after pointer parameterized function is now: %d\n",value);



	char name[15];//14 letters and null
	printf("Type your name: ");
	scanf("%s",name);//& not needed because array
	printf("You typed: %s\n",name);
	return EXIT_SUCCESS;
}
void minus10(int *v){//accepts memoery address variable
	*v=*v-10;//contents of the address are equal to the contents -10
}
