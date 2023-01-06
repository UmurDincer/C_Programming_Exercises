#include<stdio.h>

int main()
{
	double dval;
	int ival;
	
	printf("enter a real number between [-5 +5]: ");
	scanf("%lf", &dval);
	
	ival = (int)(dval > 0. ? dval + .5 : dval - .5);
	
	printf("approximated number is %d. \n", ival);
}
