#define _CRT_SECURE_NO_WARNINGS

#include"date.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define PUBLIC
#define PRIVATE		static
#define YEARBASE	1900
#define RANDOM_YEAR_MIN 	1940
#define RANDOM_YEAR_MAX 	2020

#define isleap(y)   ((y) % 4 == 0 && ((y) % 100 != 0 || y % 400 == 0))
#define mdays(y,m)  (daytabs[isleap(y)][m])

PRIVATE const int daytabs[][13] = {
	{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
};

PRIVATE Date* set(Date* p, int d, int m, int y);
PRIVATE int is_valid_date(int d, int m, int y);
PRIVATE int day_of_the_week(int d, int m, int y);
PRIVATE int totaldays(const Date* p);
PRIVATE Date* to_date(Date* pdest, int totaldays);

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC Date* set_date(Date* p, int mday, int mon, int year)
{
	return set(p, mday, mon, year);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
PUBLIC Date* set_date_today(Date* p)
{
	time_t timer;
	struct tm* tptr;

	time(&timer);
	tptr = localtime(&timer);

	return set(p, tptr->tm_mday, tptr->tm_mon + 1, tptr->tm_year + 1900);

}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC Date* set_date_by_str(Date* p, const char* pstr)
{
	int mday = atoi(pstr);
	int mon = atoi(pstr + 3);
	int year = atoi(pstr + 6);

	return set(p, mday, mon, year);

}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC Date* set_random_date(Date* p)
{
	int year = rand() % (RANDOM_YEAR_MAX - RANDOM_YEAR_MIN + 1) + RANDOM_YEAR_MIN;
	int month = rand() % 12 + 1;
	int mday = rand() % mdays(year, month) + 1;


	return set(p, mday, month, year);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC Date* set_year(Date* p, int year)
{
	return set(p, p->day, p->mon, year);

}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------


PUBLIC Date* set_month(Date* p, int mon)
{
	return set(p, p->day, mon, p->year);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------


PUBLIC Date* set_month_day(Date* p, int mday)
{
	return set(p, mday, p->mon, p->year);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int get_year(const Date* p)
{
	return p->year;
}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int get_month(const Date* p)
{
	return p->mon;
}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int get_month_day(const Date* p)
{
	return p->day;
}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int get_week_day(const Date* p)
{
	return day_of_the_week(p->day, p->mon, p->year);
}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int get_year_day(const Date* p)
{
	int sum = p->day;

	for (int i = 1; i < p->mon; ++i)
	{
		sum += mdays(p->year, i);
	}

	return sum;
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC void print_date(const Date* p)
{
	static const char* const pmons[] = {
	" ",
	"Ocak",
	"Subat",
	"Mart",
	"Nisan",
	"Mayis",
	"Haziran",
	"Temmuz",
	"Agustos",
	"Eylul",
	"Ekim",
	"Kasim",
	"Aralik"
	};

	static const char *const pdays[] = {
	"Pazar",
	"Pazartesi",
	"Sali",
	"Carsamba",
	"Persembe",
	"Cuma",
	"Cumartesi",
	};

	printf("%02d %s %d %s\n", p->day, pmons[p->mon], p->year, pdays[get_week_day(p)]);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------


PUBLIC  Date* scan_date(Date* p)
{
	int mday, mon, year;

	scanf("%d%d%d", &mday, &mon, &year);
	return set(p, mday, mon, year);
}
//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int get_date_diff(const Date* p1, const Date* p2)
{
	return totaldays(p1) - totaldays(p2);
}

//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC int cmp_date(const Date* p1, const Date* p2)
{
	if (p1->year != p2->year)
		return p1->year - p2->year;
	
	if (p1->mon != p2->mon)
		return p1->mon - p2->mon;

	return p1->day - p2->day;

}


//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------

PUBLIC Date* ndays_date(Date* pdest, const Date* psource, int n)
{
	return to_date(pdest, totaldays(psource) + n);
}


PRIVATE Date* set(Date* p, int d, int m, int y)
{
	if (!is_valid_date(d, m, y)) {
		printf("gecersiz tarih olustu!\n");
		exit(EXIT_FAILURE);
	}
	p->day = d;
	p->mon = m;
	p->year = y;

	return p;
}

PRIVATE int is_valid_date(int d, int m, int y)
{
	return y >= YEARBASE && m > 0 && m <= 12 && d > 0 && d <= mdays(y, m);
}

PRIVATE int day_of_the_week(int d, int m, int y)
{
	const int t[] = { 0,3,2,5,0,3,5,1,4,6,4 };

	if (m < 3)
		y -= 1;

	return ((y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7);
}

PRIVATE int totaldays(const Date* p)	// 1 YEAR_BASE'den geçen gün sayýsý
{
	int sum = get_year_day(p);

	for (int i = YEARBASE; i < p->year; ++i) {
		sum += isleap(i) ? 366 : 365;
	}
	return sum;
}

PRIVATE Date* to_date(Date* pdest, int totaldays)
{
	int year = YEARBASE;

	while (totaldays > (isleap(year) ? 366 : 365)) {
		totaldays -= isleap(year) ? 366 : 365;
		++year;
	}

	int mon = 1;
	
	while (totaldays > mdays(year, mon)) {
		totaldays -= mdays(year, mon);
		++mon;
	}

	int mday = totaldays;

	return set(pdest, mday, mon, year);
}