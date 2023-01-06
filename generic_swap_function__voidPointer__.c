#include<stdio.h>
#include"cumur.h"

// generic swap fonsiyonunu düzelt
//çalýþmýyor

int main()
{
	int x = 1987, y = 2019;
	double d1 = 3.14159, d2 = -4.7234;
	
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	int b[10] = {-2,-4,-6,-8,-10,-12,-14,-16,-18,-20};
	
	gswap(&x, &y, sizeof(int));
	//	gswap(&x, &y, sizeof x);
	printf("x = %d  y = %d\n", x, y);

	gswap(&d1, &d2, sizeof(double));
	printf("d1 = %f  d2 = %f\n", d1, d2);

	gswap(a, b, sizeof a);
	
	display_array(a, 10);
	display_array(b, 10);

}
