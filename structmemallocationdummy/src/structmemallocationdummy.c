/*
 ============================================================================
 Name        : structmemallocationdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	struct date{
		int month;
		int day;
		int year;
	};
	struct date *birthday;//pointer var for structure created - mem location
	//srtucture name date is used not the pointer variable
	birthday=(struct date *)malloc(sizeof(struct date));//storage for structure allocated - sizeof makes buffer for structure
	if(birthday==NULL){
			puts("MEMORY UNAVAILABLE");
			return(1);
	}
	printf("Enter your birth year: ");
	scanf("%d",&birthday->year);//-> because structure is referenced by pointer - need & because variable isnt a pointer
	printf("Enter your birth month: ");
	scanf("%d",&birthday->month);
	printf("Enter your birth day: ");
	scanf("%d",&birthday->day);

	printf("You were born on %d/%d/%d\n",birthday->month,birthday->day,birthday->year);
	return EXIT_SUCCESS;
}
