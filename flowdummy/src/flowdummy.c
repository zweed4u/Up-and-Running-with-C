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
#include <time.h>
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

	//while loops
//	int x;
//	x=1;
//	while(x<=10){ //looping condition
//		if (x%2==0){//only evens
//			printf("%d\n",x);
//		}
//		x++;
//	}
//	//or
//	int y=2;
//	while(y<=10){
//		printf("%d\n",y);
//		y=y+2;
//	}
//
//	//count backwards 10 to 1
//	int z=0;
//	while(z<10){
//		printf("%d\n",10-z);
//		z++;
//	}
//	//or
//	int decre=10;
//	while(decre>0){
//		printf("%d\n",decre);
//		decre--;
//	}

//	int b;
//	int a=7;
//	while(a<30){
//		b=a%7;
//		printf("%d %% 7 = %d\n",a,b);
//		a++;
//	}


	//infinite
//	while(1){
//		printf("I'm here forever\n");
//		//break; //breaks out after one pass
//	}


	//do while loop
	 char ch;
	 ch='a';
	 do{
		 putchar(ch);
		 //putchar('\n'); new line per letter
		 ch++;//increment through alphabet
	 }
	 while(ch!='Z' && ch!='z'); //logical operand to stop if z or Z incremented to
	 //z not printed because it is the exit condition change to 'z'+1 to see z

	putchar('\n');
	int x,r;
	srand((unsigned)time(NULL)); //seed randomizer
	x=10;
	while(x>0){
		r=rand();
		//printf("Random %d: %d\n",11-x,r); //11 = initial value+1 for display of enumeration
		printf("Random %d: %2d\n",11-x,r%100);//'limits' (takes the remainder of 100) output from 0-99
		//%2d placeholder - formatting width 2 char wide rjust
		x--;
	}


	//switch case structure
	char aa;
	printf("Your choice (A,B,C): ");
	scanf("%c",&aa);
	switch(aa){
		case 'A':
		case 'a':
			printf("Chose %c",aa);
			break; //will hit other cases as well if break is not included (execution falls through to each case)
		case 'B':
		case 'b':
			printf("Chose %c",aa);
			break;
		case 'C':
		case 'c':
			printf("Chose %c",aa);
			break;
		default:
			puts("That's not a valid choice");
	}

	return(0);
}
