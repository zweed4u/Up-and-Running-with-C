/*
 ============================================================================
 Name        : returnvaldummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
char gimmeAnA(void);
float product(float a, float b, float c);
int main(void) {
	printf("\"%c\" received from gimmeAnA() function",gimmeAnA());
	float x,y,z;
	printf("Type three numbers, separated by spaces: ");
	scanf("%f %f %f",&x,&y,&z);
	printf("%f * %f * %f = %f ",x,y,z,product(x,y,z));

	return(0);
}
char gimmeAnA(void){
	return('A');
}
float product(float a, float b, float c){
	return (a*b*c);
}
