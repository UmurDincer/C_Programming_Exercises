#include<stdio.h>
#include "cumur.h"

int main()
{
	volatile int x = 10; // bu deðiþkenin program dýþý kaynaklar tarafýndan deðiþtirilebileceðini gösteriyor.
	// const anahtar sözcüðü gibi nereye yazýldýðýna göre anlam deðiþikliði olur
	// volatile int *p ile int * volatile p ayný deðil
}
