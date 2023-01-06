#include<stdio.h>

void print_season(int month){
	
	switch(month){
	case 12:
	case 1:
	case 2: printf("Winter\n"); break;
	case 3:
	case 4:
	case 5: printf("Spring\n"); break;
	case 6:
	case 7:
	case 8: printf("Summer\n"); break;
	case 9:
	case 10:
	case 11: printf("Autumn\n"); break;
	}
}

int main()
{
	int mon;
	
	printf("enter a number of months: ");
	scanf("%d", &mon);
	
	print_season(mon);
	
}
