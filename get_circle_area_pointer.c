#include<stdio.h>

void get_circle_area(double r, double *p_area)
{
	*p_area = 3.1415926 * r * r;
}

int main()
{
	double radius;
	double area;
	
	printf("yaricap degeri giriniz: ");
	scanf("%lf", &radius);
	get_circle_area(radius, &area);
	
	printf("area = %f\n", area);
}
