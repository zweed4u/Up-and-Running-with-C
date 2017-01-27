/*
 ============================================================================
 Name        : constantdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 20//preprocesser directors are not c language statements - no semicolon in defines(constants)
#define COLUMNS 7

#define INPUT_MAX 64
int main(void) {



	float a;
	float b=5.0;
	printf("Input a number: ");
	scanf("%f",&a);//'a' variable & needed for address
	printf("%.1f / %.1f = %.1f\n",a,b,a/b); //adjusting placeholder for decimal display (1 digit after decimal)



	char input[INPUT_MAX];//set buffer size with constant
	printf("Instructions: ");
	fgets(input,INPUT_MAX,stdin);
	puts("Thank you. Here are your instructions up to 64 chars: ");
	puts(input);
	putchar('\n');

	int row,column;
	srand((unsigned)time(NULL));//seed randomizer using tictoc
	for(row=0;row<ROWS;row++){
		for(column=0;column<COLUMNS;column++){
			printf("%2d\t",rand()%100);//0 to 99
		}
		putchar('\n');
	}
	return EXIT_SUCCESS;//same as 0
}
