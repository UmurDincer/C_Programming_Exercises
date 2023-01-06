#include<stdio.h>


// const pointer
// top level const
//p always stores address of x with using
// int * const p = &x; 
int main()
{
	int x = 10;
	int y = 14;
	int * const p = &x;
	
	//p = &y; geçersiz
	*p = 876; // geçerli
}
