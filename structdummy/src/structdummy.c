/*
 ============================================================================
 Name        : structdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void) {
	struct record{
		int account;
		float balance;
	};
	struct record my_bank;//variable of structure type
	my_bank.account=1234567789;
	my_bank.balance=12950.79;
	printf("In account %d I have $%.2f\n",my_bank.account,my_bank.balance);

	struct record your_bank;//variable of structure type
	your_bank.account=222;
	your_bank.balance=950.00;
	printf("In account %d you have $%.2f\n",your_bank.account,your_bank.balance);

	putchar('\n');

	//preset within structure
	struct person{
		char name[32];
		int age;
	};
	struct person president={
			"Donald J. Trump",
			63
	};
	printf("%s is %d years old\n", president.name,president.age);

	struct person me;
	//me.name="Zachary Weeden" WONT WORK! Strings are array! Cant assign incompatible
	//fix with
	strcpy(me.name,"Zachary Weeden");
	me.age=24;
	printf("%s is %d years old\n", me.name,me.age);


	//nested structs
	struct date{
		int year;
		int month;
		int day;
	};
	struct vip{
		char name[32];
		struct date birthday;
	} friend; //same as nextline struct vip friend;
	strcpy(friend.name,"John Doe");
	friend.birthday.month=12;
	friend.birthday.day=17;
	friend.birthday.year=1992;
	printf("%s was born on %d/%d/%d\n",friend.name,friend.birthday.month,friend.birthday.day,friend.birthday.year);


	return EXIT_SUCCESS;
}
