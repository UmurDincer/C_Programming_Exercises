#include"cumur.h"
#include<ctype.h>

#define SIZE 500

int main()
{
	char s1[SIZE];
	char s2[SIZE];
	char s3[SIZE];
	
	printf("enter two name: ");
	scanf("%s%s", s1, s2);
	
	printf("[%s]  [%s] \n", s1, s2);
	
	int i;
	
	for(i = 0; s1[i] != '\0'; ++i){
		s3[i] = s1[i];
	}
	
	int k;
	
	for(k = 0; s2[k] != '\0'; ++k)
		s3[i+k] = s2[k];
		
	s3[i+k] = '\0';
	
	printf("(%s) + (%s) = (%s) \n", s1, s2, s3);
}
