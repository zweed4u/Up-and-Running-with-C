/*
 ============================================================================
 Name        : logicaloperatorsdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int iscaps(int ch);
int main(void) {
	int c;
	do{//prompt user for input and then display only the capitals in the entered string
		c=getchar();
		if(iscaps(c)){
			putchar(c);
		}
	}
	while(c!='\n');
	return(0);
}

int iscaps(int ch){
	if(ch<'A'||ch>'Z'){//before capital 'a' or after capital 'z'
		return(0);
	}
	else{
		return(1);
	}
}
