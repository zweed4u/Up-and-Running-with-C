/*
 ============================================================================
 Name        : montiorwhiledummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a=0;
	while(1){
		puts("Here I go...!");
		a++;
		if (a>100){ //evaluation of a can go into the while loop condition instead
			break;//loops through 100 times 0 to 99
		}
	}
	return(0);
}
