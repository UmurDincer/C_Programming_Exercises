#include<stdio.h>

void get_circle_vals(double radius, double *p_area, double *p_perimeter)
{
	*p_area = 3.1415926 * radius * radius;
	*p_perimeter = 2. *3.1415926 * radius; 
}

int main()
{
	double r = 57.12;
	double area, perimeter;
	
	get_circle_vals(r, &area, &perimeter);
	printf("area = %lf\nperimeter = %lf", area, perimeter);
}
