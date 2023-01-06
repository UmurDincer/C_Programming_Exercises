#ifndef  PERSON_H
#define  PERSON_H



#include"date.h"

typedef struct _Person {
	int no;
	char name[20];
	char surname[24];
	char town[20];
	Date bdate;
}Person;

Person * set_random_person(Person* p);
void print_person(const Person* p);

int cmp_person_by_no(const Person* p1, const Person* p2);
int cmp_person_by_name(const Person* p1, const Person* p2);
int cmp_person_by_surname(const Person* p1, const Person* p2);
int cmp_person_by_town(const Person* p1, const Person* p2);
int cmp_person_by_date(const Person* p1, const Person* p2);


#endif // ! PERSON_H