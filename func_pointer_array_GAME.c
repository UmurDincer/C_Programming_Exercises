#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "cumur.h"
#include<conio.h>

typedef void(*FPACTION)(void);

void dance(void)
{
	printf("warrior is dancing\n");
}
void jump(void)
{
	printf("warrior is jumping\n");
}
void fsleep(void)
{
	printf("warrior is sleeping\n");
}
void attack(void)
{
	printf("warrior is attacking\n");
}
void eat(void)
{
	printf("warrior is eating\n");
}

int main()
{
	FPACTION fa[] = {&dance, &jump, &fsleep, attack, eat};// & ile ya da & siz ayn� anlama gelir. sonu� de�i�mez.
	
	randomize();
	
	
	while(1){
		fa[rand() % asize(fa)]();
		_getch();
	} 
	
}
