#include "cumur.h"
#include<conio.h>
#include<time.h>

int icmp(const void *vp1, const void *vp2){
	return *(const int*)vp1 - *(const int *)vp2;
}

int main()
{
	int n;
	int i, k;
	int temp;
	printf("kac eleman: ");
	scanf("%d", &n);
	int *pd=malloc(n *sizeof(int));
	if(!pd){
		printf("bellek yetersiz\n");
		return 1;
	}
	set_random_array(pd, n);
	printf("siralama basladi\n");
	
	clock_t start= clock();
	qsort(pd, n, sizeof(int), &icmp);
	clock_t end = clock();
	
	printf("siralama bitti %f saniye\n", (double)(end-start)/CLOCKS_PER_SEC);
	_getch();
	display_array(pd, n);
	
	free(pd);
}
