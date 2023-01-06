#include<stdio.h>
#include"cumur.h"
#include<string.h>
#include<stdlib.h>

#define SIZE 100

void* gsearch(const void *vpa, size_t size, size_t sz_elem, const void *vpkey)
{
	const char *p = vpa;
	
	while(size--){
		if(!memcmp(p, vpkey, sz_elem))
			return (char *)p;
		p += sz_elem;
	}
	
	return NULL;
}

int main()
{
	int a[SIZE];
	int sval;
	int *ptr;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	printf("aranacak degeri giriniz: ");
	scanf("%d", &sval);
	
	ptr = (int *)gsearch(a, SIZE, sizeof(int), &sval);
	
	if(ptr){
		printf("bulundu. %d, dizinin %d indisli elemani\n", *ptr, ptr - a);
	}
	else
		printf("bulunamadi\n");

}
