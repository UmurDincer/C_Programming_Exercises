#include<stdio.h>
#include<string.h>
#include<ctype.h>

//isupper functionýn adresi olan türe bir typedef
//bildirimi ile Fctest ismini veriniz

typedef int(*Fctest)(int);

int main()
{
	Fctest fptr = &isupper;
}

