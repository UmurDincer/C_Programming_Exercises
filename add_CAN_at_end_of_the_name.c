#include"cumur.h"

#define SIZE 100

int main()
{
	char name[SIZE];
	int i;
	
	printf("enter a string: ");
	scanf("%s", name);
	// yazinin sonuna can sozcugu ekle
	
	printf("[%s]\n", name);
	
	for(i=0; name[i] != '\0'; ++i){}
	
	name[i]   =  'c';
	name[i+1] =  'a';
	name[i+2] =  'n';
	name[i+3] = '\0';
	
	printf("%s", name);
		
		
	
}
