/*
 ============================================================================
 Name        : mathdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	//* is multiply
	/// is division
	//++ increment
	//-- decrement
	// calculation on right, result on left/variable
	float a;
	float b=5.0;
	printf("Input a float: ");
	scanf("%f",&a);
	printf("%f / %f = %f\n",a,b,a/b);

	int x = 10;
	printf("%d\n",x);
	x++;
	printf("%d\n",x);

	int aa;
	aa=25/5*2+3; //shows precedence (duh)
	printf("The answer is: %d\n",aa);
	aa=25/(5*(2+3)); //shows precedence (duh)
	printf("The answer is: %d\n",aa);

	//should include math header file at top
	float r;
	r=sqrt(2.0);
	printf("The square root of 2 is: %f\n",r);

	float p;
	p=pow(2.0,8.0); //base,exponent both must be float vals
	printf("2 ** 8 = %f\n",p);

	//pseudo number because they can be predicted - needs stdlib header second most popular under stdio
	//rand needs seed srand is still predictable with input lets use time
	int randomNum;
	srand((unsigned)time(NULL)); //fetch current tic toc and give to srand function
	randomNum=rand();
	printf("This is the random number received: %d\n",randomNum);



	return(0);
}
