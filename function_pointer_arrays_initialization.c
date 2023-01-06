#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "cumur.h"

int f1(int);
int f2(int);
int f3(int);
int f4(int);
int f5(int);

int main()
{
	int(*fa[5])(int) = {f1, f2, f3, f4, f5};

}
