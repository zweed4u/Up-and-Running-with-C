/*
 ============================================================================
 Name        : linkedlistdummy.c
 Author      : Zachary Weeden
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

struct stats{//global variable (linked list needs to know vars)
		int account;
		float balance;
		struct stats *next;//pointer to another structure
};
struct stats *create(void);//prototype
void fill_structure(struct stats *s);

int main(void) {

	struct stats *first;//holds the address of the first structure in the list - base of linked list
	struct stats *current;//current structure being manipulated
	struct stats *new;//used when new structure are created - not a keyword in C (it is in C++)
	int x;

	//create first structure
	first=create();
	current=first;
	for(x=0;x<5;x++){
		if(x==0){//first pointer - where linked list is started
			first=create();
			current=first;
		}
		else{
			new=create();//new structure fetched
			current->next=new;//references new struct from current structure (link) - build list
			current=new;//current structure is the new structure
		}
		fill_structure(current);
	}
	current->next=NULL;

	current=first;//reset list - pointer looks back to first pointer (start point)
	while(current){//goes through each structure - repeat until pointer is null (end of list)
		printf("Account %05d:\t$%.2f\n",current->account,current->balance);
		current=current->next;//current pointer points to next structure
	}


	return EXIT_SUCCESS;
}

//allocate storage for one new structure
struct stats *create(void){
	struct stats *baby;
	baby=(struct stats *)malloc(sizeof(struct stats));
	if(baby==NULL){
		puts("MEMORY ERROR");
		exit(1);//stdlib
	}
	return baby;//location of allocated memory returned
}

//fill a structure
void fill_structure(struct stats *s){
	printf("Account number: ");
	scanf("%d",&s->account);
	printf("Balance: $");
	scanf("%f",&s->balance);
	s->next=NULL;//marks end of linked linst
}
