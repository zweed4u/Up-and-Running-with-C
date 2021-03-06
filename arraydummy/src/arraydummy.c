/*
 ============================================================================
 Name        : arraydummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MEALS 3
int main(void) {
	//bad without arrays
	float temp1,temp2,temp3,temp4;
	temp1=84.9;
	temp2=83.7;
	temp3=85.8;
	temp4=88.2;
	printf("Local temperatures:\n");
	printf("Station 1: %.1f\n",temp1);
	printf("Station 2: %.1f\n",temp2);
	printf("Station 3: %.1f\n",temp3);
	printf("Station 4: %.1f\n",temp4);

	//using arrays
	float temps[4]={84.9, 83.7, 85.8, 88.2};
	int x;
	printf("Local temperatures: \n");
	for(x=0;x<4;x++){
		printf("Station %d: %.1f\n",x+1,temps[x]);
	}



	//char text[]="I am a string!";
	//same as ...
	char text[]={'I',' ','a','m',' ','a',' ','s','t','r','i','n','g','!','\0'};//DONT FORGET NULL TERMINATOR
	puts(text);
	putchar('\n');


	char hello[]="Greetings human!\n";
	int n;
	n=0;
	while(hello[n]){//same as hello[n]!='\0' implied condition NULL evaluates to the false condition
		putchar(hello[n]);
		n++;
	}

	int calories[MEALS];
	int xx,total;
	total=0;
	puts("Calories counter");
	for(x=0;x<MEALS;x++){
		printf("Calories at meal %d: ",x+1);
		scanf("%d",&calories[x]);//read into array's individual ELEMENT, this is a variable & needed - not whole array element in array
		total=total+calories[x];
	}
	printf("You had a total of %d calories.\n",total);


	return EXIT_SUCCESS;
}
