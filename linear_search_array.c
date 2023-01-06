#include "cumur.h"

#define SIZE 100

// linear search

int main()
{
	int a[SIZE];
	int sval;
	int i;
	
	randomize();
	set_random_array(a, SIZE);
	display_array(a, SIZE);
	
	printf("enter a value to be searched: ");
	scanf("%d", &sval);
	
	int flag = 0;
	
	for(i = 0; i < SIZE; ++i){
		if(a[i]==sval){
			flag=1;
			break;
		}
	}
	
	if(flag){
		printf("number is found. Its index is %d.\n", i);
	}
	else
		printf("not found!\n");
}
