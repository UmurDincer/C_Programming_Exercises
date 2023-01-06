#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include "cumur.h"

#define SIZE 100

int *search_in_array(const int *p, size_t size, int key)
{
/*	size_t i;
	
	for(i = 0; i < size; ++i){
		if(p[i] == key){
		  
			return (int *) (p+i);
		}
		
	}
	
	return NULL;*/
	
	// this is preferred one:
	
	while(size--){
		if(*p == key)
			return (int *) p;
			
		++p;
	}
	
	return NULL;
	
	
}


int main()
{
	int a[SIZE];
	int sval;
	int *p;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	printf("dizide aranacak degeri giriniz: ");
	scanf("%d", &sval);
	
	p = search_in_array(a, SIZE, sval);
	if(p != NULL)
		printf("bulundu... %d dizinin %d indisli elemani\n", *p, p - a);

	else
		printf("bulunamadi\n");
}
