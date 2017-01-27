/*
 ============================================================================
 Name        : functiondummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void blorf(void); //prototypes blorf
void soup(void){
	puts("Pea green soup defined before main");
}
void cheer(void); //prototype
int main(void) {
	puts("The main() function always runs first");
	blorf();
	puts("Thanks blorf. How about a function without a prototype?");
	soup();
	cheer();//need to reference x if want to use here



	return(0);
}

void blorf(void){
	puts("This is output by the blorf function");
}

void cheer(void){
	int x;
	for(x=0;x<3;x++){
		printf("Hooray ");
	}
	//return; //bail before it ends doesnt return anything because it is void
	putchar('\n');
}
