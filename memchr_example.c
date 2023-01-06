#include<stddef.h>
#include"cumur.h"
#include<string.h>

#define BUFFER_SIZE 100

typedef unsigned char Byte;

int main()
{
	Byte buffer[BUFFER_SIZE] = { 0 };
	int i;
	
	randomize();
	for(i = 0; i < 4*BUFFER_SIZE; ++i){
		buffer[rand() % BUFFER_SIZE] = 1;
	}
	
	for(i = 0; i < BUFFER_SIZE; ++i)
		printf("%u", buffer[i]);
	printf("\n\n");
	
	Byte *ptr = memchr(buffer, 0, BUFFER_SIZE);
	
	if(ptr != NULL){
		printf("\nbulundu... dizinin %d indisli elemani\n", ptr - buffer);
	}
	else
		printf("bulunamadi!\n");
}
