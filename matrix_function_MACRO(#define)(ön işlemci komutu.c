#include<stdio.h>
#include"cumur.h"
#include<stdlib.h>

#define csmf(sz)  void set_matrix##sz(int(*p)[sz], int size){ \
	int i, k; \
	for(i = 0; i < size; ++i) \
		for(k = 0; k < sz; ++k) \
			p[i][k] = rand() % 10;}
			
#define cprmf(sz)  void print_matrix##sz(const int (*p)[sz], int size){\
		int i, k; \
		for(i = 0; i < size; ++i){ \
			for(k = 0; k < sz; ++k) \
				printf("%d ", p[i][k]); \
			printf("\n"); \
		}\
		dline();}	
			
csmf(10)
csmf(16)
csmf(20)
csmf(40)
cprmf(10)
cprmf(16)
cprmf(20)
cprmf(40)


int main()
{
	int a[5][10];
	int b[7][16];
	int c[10][20];
	int d[12][40];
	
	randomize();
	
	set_matrix10(a, 5);
	print_matrix10(a, 5);
	
	set_matrix16(b, 7);
	print_matrix16(b, 7);
	
	set_matrix20(c, 10);
	print_matrix20(c, 10);
	
	set_matrix40(d, 12);
	print_matrix40(d, 12);
	
	
	
}
