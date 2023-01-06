#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>
#include<conio.h>

#define SIZE 100
//fix the generic swap function, it does not work
int _icmp(const void *vp1, const void *vp2)
{
	if(*(const int *)vp1 > *(const int *)vp2)
		return 1;
	if(*(const int *)vp1 < *(const int *)vp2)
		return -1;
	return 0;
}

void gbsort(void *vpa, size_t size, size_t sz_elem, int(*fp)(const void*, const void*))
{
	size_t i;
	size_t k;
	char *p = (char *)vpa; 
	for(i = 0; i < size - 1; ++i){
		for(k = 0; k < size - 1 - i; ++k){
			// dizinin k indisli elemanýnýn adresi p + k * sz_elem
			// dizinin k +1  indisli elemanýnýn adresi p + (k + 1) * sz_elem
			if(fp(p + k * sz_elem, p + (k +1) * sz_elem) > 0)
				gswap(p + k * sz_elem, p + (k +1) * sz_elem, sz_elem);
		}
		
	}
}

int main()
{
	
	int a[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	gbsort(a, SIZE, sizeof(int), &_icmp);
	printf("siralama tamamlandi\nbir tusa basiniz\n");
	_getch();
	system("cls");
	display_array(a, SIZE);
}
