#include"cumur.h"

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	
	int *p1 = a + 4;
	int *p2 = a + 7;
	
	printf(" p1 > p2 = %d\n", p1 > p2);
	printf(" p1 < p2 = %d\n", p1 < p2);
}
