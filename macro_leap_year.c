#include<stdio.h>

#define isleap(y)  ((y)%4 == 0 && ((y) % 100 != 0 || (y) % 400 == 0))

int main()
{
	int year;
	
	printf("enter a year to check if it's leap year or not: ");
	scanf("%d", &year);
	
	if(isleap(year))
		printf("yes, it is a leap year.\n");
	else
		printf("no, it is not a leap year");
}
