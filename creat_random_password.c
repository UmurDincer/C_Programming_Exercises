#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define BUFFER_SIZE 100

char *create_random_password(void)
{
	static char buffer[BUFFER_SIZE];
	size_t len = rand() % 10 + 5;
	size_t i;
	for(i = 0; i < len - 1; ++i){
		buffer[i] = rand() % 26 + (rand() % 2 ? 'A' : 'a');
	}
	
	buffer[len] = '\0';
	return buffer;
}

int main()
{
	char *ptr;
	
	randomize();
	ptr = create_random_password();
	
	printf("parola = %s\n", ptr);
	
}
