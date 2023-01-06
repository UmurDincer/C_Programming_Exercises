#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>
#include<conio.h>


int dcmp(const void *vp1, const void *vp2)
{
	if(*(const double *)vp1 > *(const double *) vp2)
		return 1;
	if(*(const double *)vp1 < *(const double *) vp2)
		return -1;
	return 0;
}

int main()
{
	double a[] = {-1.4, -2.9, -1.3, 2.1, - 1.6, 1.6, 1.9, 2.8, -2.3};
	size_t i;
	qsort(a, asize(a), sizeof(double), &dcmp);
	
	for(i = 0; i < asize(a); ++i)
		printf("%.2f\n", a[i]);
	
}
