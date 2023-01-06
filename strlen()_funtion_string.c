#include<stdio.h>
#include<string.h>
#include"cumur.h"

#define SIZE 100

int main()
{
  char str_in[] = "hi())(";
  int i = 0;
  int j = 0;
  int k= 0;
  int len;
  len = strlen(str_in);
  for(k = 0; k < len; ++k){
    if(str_in[k] == '(')
      i++;
    if(str_in[k] == ')')
      j++;
  }
  if(i == j)
      printf("esit\n");
  else
  	printf("esit degil\n");
    //  <----  hajime!
}
