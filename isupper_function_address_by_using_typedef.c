#include<stdio.h>
#include<string.h>
#include<ctype.h>

//isupper function�n adresi olan t�re bir typedef
//bildirimi ile Fctest ismini veriniz

typedef int(*Fctest)(int);

int main()
{
	Fctest fptr = &isupper;
}

