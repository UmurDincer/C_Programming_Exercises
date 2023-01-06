#include<stdio.h>
#include"cumur.h"

int main()
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int *p1 = a;
	int *p2 = a + 10;
	
	while (p1 != p2){
		printf("%d ", *p1++);
	}
	
	printf("\n\n");
}
