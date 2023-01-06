#include <stdio.h>
#include <ctype.h>

int main()
{
	int i;
	printf("isupper\n");

	for(i=0; i<128; ++i){
		if(isupper(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");

	printf("islower\n");

	for(i=0; i<128; ++i){
		if(islower(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");

	printf("isalpha\n");

	for(i=0; i<128; ++i){
		if(isalpha(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");
	printf("isdigit\n");

	for(i=0; i<128; ++i){
		if(isdigit(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");

	printf("isalnum\n");

	for(i=0; i<128; ++i){
		if(isalnum(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");
	printf("isxdigit\n");

	for(i=0; i<128; ++i){
		if(isxdigit(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");
	printf("isprint\n");

	for(i=0; i<128; ++i){
		if(isprint(i))
			printf("%c", i);
	}
printf("\n------------------------------------\n");
	printf("isgraph\n");

	for(i=0; i<128; ++i){
		if(isgraph(i))
			printf("%c ", i);
	}
printf("\n------------------------------------\n");
	printf("isspace\n");

	for(i=0; i<128; ++i){
		if(isspace(i))
			printf("%d ", i);
	}
printf("\n------------------------------------\n");
	printf("isblank\n");

	for(i=0; i<128; ++i){
		if(isblank(i))
			printf("%d ", i);
	}
printf("\n------------------------------------\n");
	printf("isnctrl\n");

	for(i=0; i<128; ++i){
		if(iscntrl(i))
			printf("%d ", i);
	}
printf("\n------------------------------------\n");
	printf("ispunct\n");

	for(i=0; i<128; ++i){
		if(ispunct(i))
			printf("%c ", i);
	}
printf("\n------------------------------------\n");
}
