#include<stdio.h>
#include "cumur.h"

int main()
{
	volatile int x = 10; // bu de�i�kenin program d��� kaynaklar taraf�ndan de�i�tirilebilece�ini g�steriyor.
	// const anahtar s�zc��� gibi nereye yaz�ld���na g�re anlam de�i�ikli�i olur
	// volatile int *p ile int * volatile p ayn� de�il
}
