#include"cumur.h"
#include<ctype.h>

#define SIZE 100

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	
	printf("enter two name: ");
	scanf("%s%s", s1,s2);
	printf("s1=[%s]  s2=[%s]\n", s1, s2);
	
	int i;
	int k;
	
	for(i = 0; s1[i] != '\0'; ++i)
		;
	
	for(k=0; s2[k] != '\0'; ++k)	
		s1[i++] = s2[k];;
		
		s1[i] = '\0';
		
		printf("s1 = [%s] \n", s1);
}
