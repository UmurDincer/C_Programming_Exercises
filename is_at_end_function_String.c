#include<stdio.h>
#include<string.h>
#include"cumur.h"
#include<ctype.h>

#define SIZE 100

//boolean int
// ankara kara

int is_at_end(const char *p1, const char *p2)
{
	size_t len1 = strlen(p1);
	size_t len2 = strlen(p2);
	
	if(len1 < len2)
		return 0;
	return !strcmp(p1 + len1 - len2, p2);
	 
}
int main()
{
	char s1[SIZE];
	char s2[SIZE];
	
	printf("birinci yaziyi girin: ");
	sgets(s1);
	printf("ikinci yaziyi girin: ");
	sgets(s2);
	
	if(is_at_end(s1, s2)) // s1 yazisinin sonunda s2 var ise
		printf("evet var\n");
	else
		printf("hayir yok\n");
}
