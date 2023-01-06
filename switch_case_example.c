#include<stdio.h>

int main()
{
	int n;
	
	printf("enter n'th day of the week: ");
	scanf("%d", &n);
	
	switch(n){
	case 1: printf("Monday\n"); break;
	case 2: printf("Tuesday\n"); break;
	case 3: printf("Wednesday\n"); break;
	case 4: printf("Thursday\n"); break;
	case 5: printf("Friday\n"); break;
	case 6: printf("Saturday\n"); break;
	case 7: printf("Sunday\n"); break;
	default: printf("invalid day input!\n"); 
	}
	
	printf("switch statement was run.\n");
}
