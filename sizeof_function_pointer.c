#include<stdio.h>

int main()
{
	//bir function pointer t�r�n�n sizeof de�eri
	//int*
	//int(*)(int)
	
	printf("sizeof(int*) = %zu\n", sizeof(int*));
	printf("sizeof((int*)(int)) = %zu\n", sizeof(int(*)(int)));
	
}
