#include<stdio.h>

//pointer to const int
// low level const

int main()
{
	int x = 10;
	int y = 14;
	const int *p = &x;

//	*p = 87;  geçersiz
// this format can be used for read the variable 
// it cannot be used to change the variable
	p = &y; 

}
