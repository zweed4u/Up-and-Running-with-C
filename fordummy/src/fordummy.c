/*
 ============================================================================
 Name        : fordummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
//	int x;
//	for(x=0;x<10;x++){//initialization(assignment); looping condition; iteration statement(increment)
//		printf("%d\n",x+1);
//	}

	//1-20
	//evens 2-20
	//10-1
//	int challenge=0;
//	for(int ch1=0;ch1<20;ch1++){
//		printf("Challenge%d: %d\n",challenge+1,ch1+1);
//	}
//	for(int ch2=0;ch2<20;ch2=ch2+2){//could do modulo stuff here instead of +2
//		printf("Challenge%d: %d\n",challenge+2,ch2+2);
//	}
//	for(int ch3=10;ch3>0;ch3--){
//		printf("Challenge%d: %d\n",challenge+3,ch3);
//	}

	//nested loop
	int column,r,row;
	srand((unsigned)time(NULL));
	for(row=0;row<10;row++){//10rows
		for(column=0;column<10;column++){//10 columns
			r=rand();
			printf("%2d\t",r%100);
		}
		putchar('\n');
	}

	//another nested loop
	int alpha,numeric;
	for(alpha='A';alpha<'K';alpha++){
		for(numeric=0;numeric<10;numeric++){
			printf("%c%d\t",alpha,numeric);
		}
		putchar('\n');
	}


	//testing break
	char ch,t;
	printf("Type letter 'a' to 'z': ");
	scanf("%c",&ch);
	for(t='a';t<='z';t++){
		putchar(t);
		if(ch==t){
			break;
		}
	}
	putchar('\n');

	return EXIT_SUCCESS;
}

