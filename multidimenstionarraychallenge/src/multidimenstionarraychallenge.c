/*
 ============================================================================
 Name        : multidimenstionarraychallenge.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//2d char array
	char names[5][10]={//[containers][container length (longest string)]
		"Mickey",
		"Minnie",
		"Goofy",
		"Pluto",
		"Pinocchio"//longest
	};
	int xx;
	for(xx=0;xx<5;xx++){
		printf("%s\n",names[xx]);
	}
	return EXIT_SUCCESS;
}
