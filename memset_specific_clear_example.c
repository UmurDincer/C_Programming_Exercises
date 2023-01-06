#include"cumur.h"
#include<string.h>

#define SIZE 100


int main()
{
	int a[SIZE];
	size_t idx, n;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);

	printf("hangi indisten baslayarak: ");
	scanf("%zu", &idx);
	
	printf("kac eleman sifirlanacak: ");
	scanf("%zu", &n);
	
	memset(a + idx, 0, n*sizeof(int));
	
	display_array(a, SIZE);
	
	
}
