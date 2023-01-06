#include<stdio.h>
#include<string.h>
#include"cumur.h"

void swap_names(char *px, char *py)
{
	static char temp[20];
	
	strcpy(temp, px);
	strcpy(px, py);
	strcpy(py, temp);
}

int main()
{
	char s1[40] = "murtaza";
	char s2[40] = "necmettin";
	
	printf("(%s) (%s)\n", s1, s2);
	swap_names(s1, s2);
	printf("(%s) (%s)\n", s1, s2);
}
