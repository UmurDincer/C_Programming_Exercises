#include<stdio.h>

//const pointer to const int
//const anahtar s�zc��� neyden �nce gelirse constant olan o dur.
int main()
{
	int x = 10;
	int y = 14;
	const int * const p = &x;
	
//	p = &y; ge�ersiz
//	*p = 98; ge�ersiz

}
