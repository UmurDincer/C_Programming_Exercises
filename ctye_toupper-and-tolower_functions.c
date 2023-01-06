#include <stdio.h>
#include <ctype.h>

int main()
{
	int ch;
	printf("enter a character: \n");
	ch = getchar();
	
	printf("%c --> %c \n", ch, toupper(ch));
	printf("%c --> %c \n", ch, tolower(ch));
}
