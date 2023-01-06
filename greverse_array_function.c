#include<stdio.h>
#include"cumur.h"
#include<string.h>
#include<stdlib.h>
// generic swap fonsiyonu çalýþmadýðý için
//program doðru çalýþmýyor
//"cumur.h" de gswap fonksiyonunu düzelt

/*void *greverse_array(void *vpa, size_t size, size_t sz_elem)
{
	size_t i;
	char *p = vpa;	
	for(i = 0; i < size / 2; ++i){
		gswap(p + i * sz_elem,	p + (size - 1 -i) * sz_elem, sz_elem);
	}
	
	return vpa;
}
*/
void *greverse_array(void *vpa, size_t size, size_t sz_elem)
{
	char *ps = vpa;
	char *pe = ps + size * sz_elem;
	
	while(ps < pe){
		pe -= sz_elem;
		gswap(ps, pe, sz_elem);
		ps += sz_elem;
	}
	
	return vpa;
}


int main()
{
	int a[] = {1,3,5,7,9,11,13,17,19,21};
	double b[] = {1.1,2.2,3.3,4.4,5.5,6.6,7.7, };
	size_t i;
	
	greverse_array(a, asize(a), sizeof(*a));

	greverse_array(b, asize(b), sizeof(*b));
	
	display_array(a, asize(a));
	
	for(i = 0; i < asize(b); ++i)
		printf("%.2f\n", b[i]);
	
}
