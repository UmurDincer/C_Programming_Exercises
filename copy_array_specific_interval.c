#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include"cumur.h"

#define SIZE 100



void copy_array(int *pdest, const int *psource, int n)
{
	while(n--)
		*pdest++ = *psource++;
}

int main()
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	int idxa, idxb, n;
		
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	printf("a'da idx b'de idx ve kopyalanacak oge sayisini giriniz: ");
	scanf("%d%d%d", &idxa, &idxb, &n);
	copy_array(b+idxb, a+idxa, n);
	display_array(b, SIZE);
}
