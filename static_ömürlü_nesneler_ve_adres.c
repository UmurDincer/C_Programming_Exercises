#include<stdio.h>
#include"cumur.h"
#include<time.h>



int main()
{
	time_t timer;
	time(&timer);
	
	for(int i = 0; i < 10; ++i){
		printf("%p\n", ctime(&timer));
	}
	
	getchar();
	
	for(int i = 0; i < 10; ++i){
		printf("%p\n", tmpnam(NULL));
	}
	
}
