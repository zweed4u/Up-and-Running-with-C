/*
 ============================================================================
 Name        : morepointerarraydummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
//** notation is usually a tell tale sign that youre dealing with an array of strings
//or more specifically an array of memory locations for each of those strings
int main(void) {
	//array of pointers -- collection of mem addresses
	char *gang[5]={//little rascals
			"Spanky",
			"Buckwheat",
			"Alfalfa",
			"Darla",
			"Pete the Pup"
	};
	int x;
	char *cptr;
	for(x=0;x<5;x++){
		//cptr=gang[x];//array notation 'heinous' convert to pointer notation below
		cptr=*(gang+x);//uses mem addr of gang var and x added to each baseaddress + x
		while(*cptr){//contents/chars of each gang element
			putchar(*cptr);//output char
			cptr++;//increment memloc
		}
		putchar('\n');
	}
	return EXIT_SUCCESS;
}
