/*
 ============================================================================
 Name        : bitwiseopdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	//C essentials - bit-level calculations with bitwise operations
	// & AND
	// ~ one's complement 0->1, 0->1 toggle in a given number
	// | OR
	// >> right shift
	// ^ XOR
	// << left shift
	/*
	 * TABLE	AND		OR		XOR
	 * p	q	pq		p+q		p^q
	 * 0	0	0		0		0
	 * 0	1	0		1		1
	 * 1	0	0		1		1
	 * 1	1	1		1		0
	 */
	puts("Bit-level calculations:");
	puts("========================");

	unsigned int a=-8;
	unsigned int x=10;
	unsigned int y=1;
	unsigned int result;

	result=x&y;//bit level and
	printf("x & y = %d\n",result);//1010 and 0001 = 0000 = 0

	result=x|y;//bit level or
	printf("x | y = %d\n",result); // 1010 or 0001 = 1011 = 11

	result=x^y;//bit level xor
	printf("x ^ y = %d\n",result);//1010 xor 0001 = 1011 = 11


	//right shift and left shift
	result=x>>1;//shift to right 1
	printf("x >> 1 = %d\n",result);//1010 shift over right 1 = 0101 = 5

	result=x<<1;//shift to left 1
	printf("x << 1 = %d\n",result);//1010 shift over left 1 = 10100 = 20

	result=y>>1;//shift to right 1
	printf("y >> 1 = %d\n",result);//0001 shift over right 1 = 0000 = 0

	result=y<<1;//shift to left 1
	printf("y << 1 = %d\n",result);//0001 shift over left 1 = 0010 = 2

	/*1's complement table
	 * 10	1010
	 * 9	1001
	 * 8	1000
	 * 7	0111
	 * 6	0110
	 * 5	0101
	 * 4	0100
	 * 3	0011
	 * 2	0010
	 * 1	0001
	 * 0	0000
	 * -0	1111
	 * -1	1110 flip 1
	 * -2	1101
	 * -3	1100
	 * -4	1011
	 * -5	1010
	 * -6	1001
	 * -7	1000
	 * -8	0111
	 * -9	0110
	 * -10	0101
	 * -11  0100
	 */

	//1s complement
	result=~x;//1s complement of x adds one and flips polarity 0000 0000 0000 1010
	printf("~x = %d\n",result);//1010 -> toggle = 1111 1111 1111 0101 - neg polarity flip and +1 for val
	//0000 0000 0000 1010 + 1 = 11 -> -11 (simpler to just add one to the number and then flip sign even for neg)

	result=~y;//1s complement of y adds one and flips polarity 0000 0000 0000 0001
	printf("~y = %d\n",result);//0001 -> toggle = 1111 1111 1111 1110 - neg polarity flip and +1 for val
	//0000 0000 0000 0001 + 1 = 2 -> -2

	//-10
	//find positive: 10 -> 0000 0000 0000 1010
	//flip and add 1: 1111 1111 1111 0110 (this is -10) twos complement
	//toggle again after + 1: 0000 0000 0000 1001 (this is positive 9) - this is our answer
	result=~a;//1s complement of x adds one and flips polarity 0000 0000 0000 1010
	printf("~a = %d\n",result);//1010 -> toggle = 1111 1111 1111 0101 - neg polarity flip and +1 for val
	//0000 0000 0000 1010 + 1 = 11 -> -11 (simpler to just add one to the number and then flip sign even for neg)


	return EXIT_SUCCESS;
}
