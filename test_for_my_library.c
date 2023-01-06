#include "cumur.h"


int main()
{
	int day, mon, year;
	
	printf("enter a date as day month year:");
	scanf("%d%d%d", &day, &mon, &year);
	
	switch(day_of_the_week(day, mon, year)){
	case 0: printf("Sunday\n"); break;
	case 1: printf("Monday\n"); break;
	case 2: printf("Tuesday\n"); break;
	case 3: printf("Wednesday\n"); break;
	case 4: printf("Thursday\n"); break;
	case 5: printf("Friday\n"); break;
	case 6: printf("Saturday\n"); break;
	
	}
	
	dline();
	
	system("PAUSE");
}

