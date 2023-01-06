#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main()
{
	unsigned int uval;
	int i;
	for(uval =45000; uval < 46000; ++uval){
		srand(uval);
		printf("seed's value is %u.\n", uval);
		for(i = 0; i < 100; ++i){
			if(i && i % 10 == 0)
				printf("\n");
				printf("%5d ", rand());
		}
		_getch();
		system("cls");
	}
}
