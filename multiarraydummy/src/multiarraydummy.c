/*
 ============================================================================
 Name        : multiarraydummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ROWS 4
#define COLUMNS 4

int main(void) {
	int grid[ROWS][COLUMNS];
	int x,y;
	//intializing the array
	for(x=0;x<ROWS;x++){
		for(y=0;y<COLUMNS;y++){
			grid[x][y]=0;
		}
	}
	grid[2][2]=1;
	//display
	for(x=0;x<ROWS;x++){
			for(y=0;y<COLUMNS;y++){
				printf("%d,%d: %d\t",x,y,grid[x][y]);
			}
			putchar('\n');
		}

	//2d char array
	char names[4][7]={//[containers][container length (longest string)]
		"Mickey",//6 letters long longest string 6+1(NULL) = 7 see second dimension
		"Minnie",
		"Goofy",
		"Pluto"
	};
	int xx;
	for(xx=0;xx<4;xx++){
		printf("%s\n",names[xx]);
	}




	return EXIT_SUCCESS;
}
