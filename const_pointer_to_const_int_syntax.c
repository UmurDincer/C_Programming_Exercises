#include<stdio.h>

//const pointer to const int
//const anahtar sözcüðü neyden önce gelirse constant olan o dur.
int main()
{
	int x = 10;
	int y = 14;
	const int * const p = &x;
	
//	p = &y; geçersiz
//	*p = 98; geçersiz

}
