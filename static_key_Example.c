#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>

#define URAND_MAX 100


void func()
{
	static int first_call_flag = 1;
	
	if(first_call_flag){
		printf("yalnizca ilk cagrida yaspilan isler\n\n");
		
		first_call_flag = 0;
	}
	
	printf("tum cagrilarda yapilan isler\n");
}

int main()
{
	for(int i = 0; i < 10; ++i){
		func();
	}
}
