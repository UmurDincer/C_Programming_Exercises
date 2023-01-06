#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	srand((unsigned)time(0));
	int i;
	
	for(i=0; i<100; ++i){
	switch(rand() % 7 + 1){
	case 1: printf("Monday\n"); break;
	case 2: printf("Tuesday\n"); break;
	case 3: printf("Wednesday\n"); break;
	case 4: printf("Thursday\n"); break;
	case 5: printf("Friday\n"); break;
	case 6: printf("Saturday\n"); break;
	case 7: printf("Sunday\n"); break;
	}
	_getch();
	
}
}
