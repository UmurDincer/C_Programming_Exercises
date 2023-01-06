#define _CRT_SECURE_NO_WARNINGS

#include"person.h"
#include"cumur.h"
#include<stdlib.h>
#include<string.h>

Person * set_random_person(Person* p)
{
	p->no = rand();
	strcpy(p->name, random_name());
	strcpy(p->surname, random_surname());
	strcpy(p->town, random_town()); 
	set_random_date(&p->bdate);
	return p;
}

void print_person(const Person* p)
{
	printf("%-8d%-16s%-20s%-16s", p->no, p->name, p->surname, p->town);
	print_date(&p->bdate);
}


int cmp_person_by_no(const Person* p1, const Person* p2)
{
	return p1->no - p2->no;
}

int cmp_person_by_name(const Person* p1, const Person* p2)
{
	return strcmp(p1->name, p2->name);
}

int cmp_person_by_surname(const Person* p1, const Person* p2)
{
	return strcmp(p1->surname, p2->surname);
}


int cmp_person_by_town(const Person* p1, const Person* p2)
{
	return strcmp(p1->town, p2->town);
}

int cmp_person_by_date(const Person* p1, const Person* p2)
{
	return cmp_date(&p1->bdate, &p2->bdate);
}