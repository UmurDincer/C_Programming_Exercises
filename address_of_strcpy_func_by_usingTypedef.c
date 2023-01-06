#include<stdio.h>
#include<string.h>
#include<ctype.h>


typedef char *(*Fpcopy)(char *, const char *);

int main()
{
	Fpcopy fp = &strcpy;
}

