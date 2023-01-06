#include <stdio.h>

int main()
{
//	char a[10] = { 0 }; address 1er 1er artar
//	short a[10] = { 0 }; address 2şer 2şer artar
//	int a[10] = { 0 };  address 4er 4er artar
	double a[10] = { 0 }; // address 8er 8er artar
	int i;
	for(i = 0; i < 10; ++i){
		printf("%p\n", a + i);
	}
}
