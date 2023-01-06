#include "fptr.h"
#include<stdio.h>

typedef void(*FPTR)(void);

void foo(void);

FPTR gfp = &foo;

void func(void)
{
	gfp();
}

FPTR set_func(FPTR fp)
{
	FPTR f = gfp;
	gfp = fp;
	
	return f;
}

void foo()
{
	printf("foo islevi cagirildi\n");
}
