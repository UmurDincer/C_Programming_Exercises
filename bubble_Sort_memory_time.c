#include "cumur.h"
#include<conio.h>
#include<time.h>

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
	for(i = 0; i< n-1 ; ++i){
		for(k=0; k< n-1-i; ++k){
			if(pd[k]> pd[k+1]){
				temp= pd[k];
				pd[k]=pd[k+1];
				pd[k+1]= temp;			}
		}
	}
	clock_t end = clock();
	
	printf("siralama bitti %f saniye\n", (double)(end-start)/CLOCKS_PER_SEC);
	_getch();
	display_array(pd, n);
	
	free(pd);
}
