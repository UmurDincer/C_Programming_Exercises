#include<stdio.h>

int main()
{
	//bir function pointer türünün sizeof deðeri
	//int*
	//int(*)(int)
	
	printf("sizeof(int*) = %zu\n", sizeof(int*));
	printf("sizeof((int*)(int)) = %zu\n", sizeof(int(*)(int)));
	
}
