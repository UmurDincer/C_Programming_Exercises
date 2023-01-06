#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100



int main()
{
	int *a[10];
	int x = 10, y = 45;
	int *p = &x;
	
	a[0] = &x;
	a[1] = &y;
	a[2] = NULL;
	a[3] = p;

}
