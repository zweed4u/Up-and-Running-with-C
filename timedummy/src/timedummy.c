/*
 ============================================================================
 Name        : timedummy.c
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
	time_t now;//time datatype

	time(&now);
	printf("The current time is %ld\n",now);//placeholder ld is long integer value (epoch returned)
	printf("The current time is %s\n",ctime(&now));//convert epoch to string


	struct tm *right_now;
	right_now=localtime(&now);
	printf("Today is %d/%d at %d:%02d\n",//fixes single digit minute - prefixes 0 if needed
			right_now->tm_mon+1,//starts at 0
			right_now->tm_mday,
			right_now->tm_hour,
			right_now->tm_min);
	return EXIT_SUCCESS;
}
