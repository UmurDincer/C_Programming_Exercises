#include "cumur.h"


#define URAND_MAX 100
//�retilen say�lar [0 URAND_MAX] aral���nda olacak
// fazla �a��r�l�rsa -1 de�eri d�nd�recek

int urand(void)
{
	static int a[URAND_MAX] = { 0 };
	static int count = 0;
	int ival;
	
	if(count == URAND_MAX)
		return -1;
	
//both while loop works(but this one more professional)
	while(a[ival = rand() % URAND_MAX])
		;//null statemenet
	
/*	while(1){
		ival = rand() % URAND_MAX;
		if(a[ival] == 0)
			break;
	}*/
	
	a[ival] = 1;
	++count;
	return ival;
}

int main()
{
	int i;
	
	randomize();
	
	for(i = 0;i < URAND_MAX; ++i)
		printf("%d ", urand());
		
	printf("\n");
	
	printf("%d ", urand()); // -1 yazmali
}
