#include<stdio.h>

#define gsf(t)		void swap_##t(t *p1, t *p2) { \
	t temp = *p1;\
	*p1 = *p2;\
	*p2 = temp;}
	
gsf(int)
gsf(double)
gsf(long)

int main()
{
	int a=10, b = 20;
	double d1=3.4, d2=5.6;
	long l1 = 456, l2= 7476;
	
	swap_int(&a, &b);
	swap_double(&d1, &d2);
	swap_long(&l1, &l2);
	
	printf("a = %d, b = %d\n", a,b);
	printf("d1 = %.2f, d2 = %.2f\n", d1, d2);
	printf("l1 = %d, l2 = %d \n", l1, l2);
}
