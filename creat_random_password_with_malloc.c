#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define BUFFER_SIZE 100

char *create_random_password(void)
{
	static char buffer[BUFFER_SIZE];
	size_t len = rand() % 10 + 5;
	char *pd;
	size_t i;
	for(i = 0; i < len - 1; ++i){
		buffer[i] = rand() % 26 + (rand() % 2 ? 'A' : 'a');
	}
	
	buffer[len] = '\0';
	pd =malloc(len + 1);
	if(!pd)
		return NULL;
		
	return strcpy(pd, buffer);
}

int main()
{
	char *p[10];
	int i;
	
	randomize();
	
	for(i = 0; i < 10; ++i)
		p[i] = create_random_password();
	
	//
	
	for(i = 0; i < 10; ++i)
		puts(p[i]);
		
	for(i = 0; i < 10; ++i)
		free(p[i]);
	
}
