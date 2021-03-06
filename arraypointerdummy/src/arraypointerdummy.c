/*
 ============================================================================
 Name        : arraypointerdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int array[]={11, 13, 17, 19};//datatype is what the array elements are
	int x;
	for(x=0;x<4;x++){
		printf("Element %d of array is: %d\n",x,array[x]);
	}
	putchar('\n');
	//using a pointer
	int y;
	int *aptr;
	aptr=array; //no & needed for array
	for(y=0;y<4;y++){
		printf("Element %d of array is: %d\n",y,*aptr);//value of pointer location is fetched
		aptr++;//increment the pointer mem location by the size of datatype that matches the variable []
	}
	putchar('\n');

	//manipulating array with pointer
	int z;
	int *zptr;
	zptr=array; //no & needed for array (base address of array)
	*(zptr+2)=0;//contents of 3rd element (starting at 0) changed to 0
	for(z=0;z<4;z++){
		printf("Element %d of array is: %d\n",z,array[z]);//value of pointer location is fetched
	}
	return EXIT_SUCCESS;
}
