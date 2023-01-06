#include<stdio.h>

// designated initializer
// 10 40 60 90
// 5  13 34 87

int main()
{
	int a[100]={[10]=5, [40]= 13, [60]=34, [90]=87};
	int i;
	
	for(i = 0; i < 100; ++i){
		printf("a[%d] = %d\n", i, a[i]);
	}
}
