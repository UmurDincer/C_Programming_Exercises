#include<stdio.h>

int isleap(int y)
{
	return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

int  dayOfYear(int day, int month, int year)
{ 
int sum = day;

switch(month - 1){

case 11: sum +=30; // fallthrough
case 10: sum +=31; // fallthrough
case 9 : sum +=30;
case 8 : sum +=31;
case 7 : sum +=31;
case 6 : sum +=30;
case 5 : sum +=31;
case 4 : sum +=30;
case 3 : sum +=31;
case 2 : sum +=28 + isleap(year) ? 29 : 28; //fallthrough
case 1 : sum +=31;
}

return sum;
   
}

int main()
{
	int day, month, year;
	int n = 5;
	
	while(n-- > 0){
		printf("enter a date as day month year: ");
		scanf("%d%d%d", &day, &month, &year);
		printf("%d. day of year %d!\n", dayOfYear(day,month,year), year);
	}
}

