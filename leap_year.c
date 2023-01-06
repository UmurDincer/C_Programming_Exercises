#include <stdio.h>
#include <math.h>

int is_leap(int y)
{ 
 	return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0 );
} 

int main()
{
	int year;
	
	printf("enter a year:");
	scanf("%d", &year);
	
	if(is_leap(year) != 0)
		printf("%d is a leap year! \n", year);
	else
		printf("%d is not a leap year! \n", year);
		
}
