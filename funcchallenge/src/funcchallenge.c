/*
 ============================================================================
 Name        : funcchallenge.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void evaluate(int x);//prototype needed declaration

int main(void) {
	int i;
	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x){
	if(x<10){
		printf("%d is less than 10",x);
	}
	else if(x>10){
		printf("%d is greater than 10",x);
	}
	else{
		printf("%d is equal to 10",x);
	}
}
