#include "cumur.h"
#include<conio.h>

#define SIZE 20

int main()
{
	int a[SIZE];
	int i, k;
	
	randomize();
	
	for(i = 0; i < 20; ++i){
		a[i] = rand() % 20 +1;
		printf("%d ", a[i]);
	}	 
	printf("\n\n\n");
	
	for(i = 0; i < SIZE; ++i){
		for(k = 0; k < a[i]; ++k){
			putchar('*');
		}
		putchar('\n');
	}
}
