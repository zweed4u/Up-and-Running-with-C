/*
 ============================================================================
 Name        : argsdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void repeat(int count);
void product(float a, float b, float c);
void bar(char c, int count);
int main(void) {
/*repeat
//	int a,b;
//	a=1;
//	b=5;
//	puts("At first I was like: ");
//	repeat(a);
//	puts("But then he was all: ");
//	repeat(b);
*/


/*product
//	float x,y,z;
//	printf("Type three numbers, separated by spaces: ");
//	scanf("%f %f %f",&x,&y,&z);
//	product(x,y,z);
*/

	int x;
	for(x=1;x<11;x++){
		bar('*',x*2);
	}

	return(0);
}

void repeat(int count){
	int x;
	for(x=0;x<count;x++){
		puts("Nevermore!");
	}
}

void product(float a, float b, float c){
	float p;
	p=a*b*c;
	printf("%f * %f * %f = %f",a,b,c,p);
}

void bar(char c, int count){
	int x;
	for(x=0;x<count;x++){
		putchar(c);
	}
	putchar('\n');
}
