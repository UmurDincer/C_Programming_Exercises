#include<stdio.h>

#define unify(a,b)  a##b

int main()
{
	int counter=0;
	
	++unify(cou,nter); // it makes the elements ++counter
	
	printf("counter = %d\n", counter);
}
