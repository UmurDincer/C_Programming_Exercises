#include<stdio.h>
#include"cumur.h"
#include<string.h>

#define SIZE 100

//memcmp function: compare two memory block
//retval > 0 1.blok büyük
//retval < 0 2.blok büyük
//retval = 0 eþit
// 1000 1001 1000 1001
//

int memcmp1(const void *vp1, const void *vp2, size_t n)
{
	const unsigned char *p1 = vp1;
	const unsigned char *p2 = vp2;
	
	while(n--){
		if(*p1 != *p2)
			return *p1 > *p2 ? 1: -1;
		++p1;
		++p2;
	}
	
	return 0;
}

int main()
{
	int a[SIZE];
	int b[SIZE];
	
	randomize();
	set_random_array(a, SIZE);
	memcpy(b, a, sizeof(a));
	
//	display_array(a, SIZE);
//	display_array(b, SIZE);

	if(!memcmp(a, b, sizeof a))
		printf("evet iki dizi esit\n");
	else
		printf("hayir iki dizi esit degil\n");
	
	++b[rand() % SIZE];
	
	if(!memcmp(a, b, sizeof a))
		printf("\n\nevet iki dizi esit\n");
	else
		printf("\n\nhayir iki dizi esit degil\n");
		
	if(!memcmp(a + 10, b + 50, 10 * sizeof(int)))
		printf("\n\nevet esit\n");
	else
		printf("\n\nhayir esit degil\n");
}
