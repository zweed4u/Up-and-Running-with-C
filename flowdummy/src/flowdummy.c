/*
 ============================================================================
 Name        : flowdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	 * == is equal to
	 * < less than
	 * > greater than
	 * <= less than equal to
	 * >= greater than equal to
	 * != not equal to
	 */
//	int a;
//	int thresh=10;
//	printf("Type an integer: ");
//	scanf("%d",&a);
//	printf("You typed: %d\n",a);
//	if(a>thresh){
//		printf("%d is greater than %d\n",a,thresh);
//	}
//	else if(a<thresh){
//		printf("%d is less than %d\n",a,thresh);
//	}
//	else{
//		printf("%d is equal to %d\n",a,thresh);
//	}

	//switch case struture
	char aa;
	printf("Your choice (1,2,3): ");
	scanf("%c",&aa);
	switch(aa){
		case '1':
			printf("Chose %c",aa);
			break;
		case '2':
			printf("Chose %c",aa);
			break;
		case '3':
			printf("Chose %c",aa);
			break;
		default:
			puts("That's not a valid choice");
	}

	return(0);
}
