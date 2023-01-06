#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100
 
 void *gsearch(const void *vpa, size_t size, size_t sz_elem, const void *pkey)
  {
  	const char *p = (const char*)vpa;
  	size_t i;
  	for(i = 0; i < size; ++i){
  		if(!memcmp(p + i * sz_elem, pkey, sz_elem))
  			return (char *)(p + i *sz_elem);
	  }
	  return NULL;
  }
 int main()
 {
	int a[SIZE];
	int sval;
	int *iptr;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	printf("aranan degeri giriniz: ");
	scanf("%d", &sval);
	
	if((iptr = gsearch(a, SIZE, sizeof(*a), &sval)) == NULL)
		printf("aranan deger bulunamadi\n");
	else
		printf("bulundu. %d dizinin %d indisli elemani\n",*iptr, iptr - a);
		
 }
