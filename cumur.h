#ifndef CUMUR_H
#define CUMUR_H
#include "cumur.c"
#define isleap(y)   ((y) % 4 == 0 && ((y) % 100 != 0 || y % 400 == 0))
#define asize(x)	(sizeof(x) / sizeof(x[0]))
void dline(void);
int isprime(int);
int ndigit(int);
void sleep(double sec);
int day_of_the_week(int d , int m , int y );
void cls(void);
void randomize(void);
void set_random_array(int *p, int size);
void display_array(const int *p, int size);
void sort(int *p, int size);
void sgets(char *p);
void mygets_s(char *p, int size);
void swap(int *p1, int *p2);
static int icmp(const void *vp1, const void *vp2);
void gswap(void *vp1, void *vp2, size_t n);

#endif
