#include<stdio.h>

#define gsf(t)		void swap(t *p1, t *p2) { \
	int temp = *p1;\
	*p1 = *p2;\
	*p2 = temp;}
	
gsf(int)

int main()
{
	int a=10, b = 20;
	
	swap(&a, &b);
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
}
