#pragma once

#include"person.h"

struct List;
typedef struct List* ListHandle;

ListHandle create_list(void);
void destroy_list(ListHandle);

void get_first(ListHandle, Person* p );
void push_front(ListHandle,const Person* p);
void pop_front(ListHandle);
int get_size(ListHandle);
int is_empty(ListHandle);
void display_list(ListHandle);
void empty_list(ListHandle);

