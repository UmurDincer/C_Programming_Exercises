#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

void *memcpy2(void *vpdest, const void *vpsource,size_t n)
{
	char *pdest = vpdest;
	const char *psource = vpsource;
	
	while(n--)
		*pdest++ = *psource++;
	return vpdest;
}

int main()
{
	int a[SIZE];
	int b[SIZE] = { 0 };
	int idxa, idxb, n;
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	printf("a da index: ");
	scanf("%d", &idxa);
	printf("b da index: ");
	scanf("%d", &idxb);
	printf("kac eleman kopyalanacak: ");
	scanf("%d", &n);
	
	memcpy(b + idxb, a + idxa, n*sizeof(int));
	display_array(b, SIZE);
	

}
