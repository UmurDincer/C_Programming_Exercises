#include<stdio.h>


void swap(int *p1, int *p2){
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int x = 13;
	int y = 27;
	
	swap(&x, &y);
	
	printf("x = %d.\n", x);
	printf("y = %d.\n", y);
}
