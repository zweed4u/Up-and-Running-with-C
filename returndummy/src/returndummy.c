/*
 ============================================================================
 Name        : returndummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int max(int x, int y);
void isLarger(int big);
int main(void) {
	int a,b,larger;
	printf("type two integers separated by a space: ");
	scanf("%d %d",&a,&b);
	larger=max(a,b);
	if(a==larger){
		isLarger(a);
	}
	else{
		isLarger(b);
	}
	return(0);
}

int max(int x, int y){
	if(x>y){
		return x;
	}
	else{
		return y;
	}
}

void isLarger(int big){
	printf("Value %d is larger",big);
}
