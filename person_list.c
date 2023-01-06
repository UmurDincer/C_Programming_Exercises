#include"person_list.h"
#include"cumur.h"
#include<stdlib.h>
#include<stdio.h>

typedef struct Node {
	Person per;
	struct Node* pnext;
}Node;

struct List {
	Node* gpfirst;
	int gcount;
};

ListHandle create_list(void)
{
	ListHandle handle = malloc(sizeof(struct List));
	//

	handle->gpfirst = NULL;
	handle->gcount = 0;

	return handle;

}


int is_empty(ListHandle h)
{
	return h->gpfirst == NULL;
}

int get_size(ListHandle h)
{
	return h->gcount;
}

void display_list(ListHandle h)
{
	for (Node* p = h->gpfirst; p != NULL; p = p->pnext) {
		print_person(&p->per);
	}

	dline();		
}

void push_front(ListHandle h, const Person* p)
{
	Node* pnewnode = malloc(sizeof(Node));
	if (!pnewnode) {
		printf("bellek yetersiz\n");
		exit(EXIT_FAILURE);
	}

	pnewnode->per = *p;
	pnewnode->pnext = h->gpfirst;
	h->gpfirst = pnewnode; 
	++h->gcount;
}

void get_first(ListHandle h, Person* p)
{
	if (is_empty(h)) {
		printf("bos liste hatasi!!}\n");
		exit(EXIT_FAILURE);
	}

	*p = h->gpfirst->per;
}

void pop_front(ListHandle h)
{
	Node* ptemp;
	if (is_empty(h)) {
		printf("bos liste hatasi!!}\n");
		exit(EXIT_FAILURE);
	}

	ptemp = h->gpfirst;
	h->gpfirst =h->gpfirst->pnext;
	free(ptemp);
	--h->gcount;
}

void empty_list(ListHandle h)
{
	while (!is_empty(h))
		pop_front(h);
}


void destroy_list(ListHandle h)
{
	empty_list(h);
	free(h);
}