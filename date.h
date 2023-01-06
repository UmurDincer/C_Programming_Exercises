#ifndef DATE_H
#define DATE_H

#include<time.h>

typedef struct _Date {
	int day, mon, year;

}Date;

// set functions - setter - mutators

Date *set_date(Date* p, int mday, int mon, int year);
Date* set_date_today(Date* p);
Date *set_date_by_str(Date* p, const char* pstr);
//Date *set_date_time_t(Date* p, time_t timer);
Date *set_random_date(Date* p);
Date *set_year(Date* p, int year);
Date *set_month(Date* p, int mon);
Date *set_month_day(Date* p, int mday);

Date *increment_date(Date* p, int ndays);
Date* decrement_date(Date* p, int ndays);
//getters - get functions - accessors

int get_year(const Date* p);
int get_month(const Date* p);
int get_month_day(const Date* p);
int get_week_day(const Date* p);
int get_year_day(const Date* p);

int get_date_diff(const Date* p1, const Date* p2);
Date *ndays_date(Date* pdest, const Date* psource, int n);

// formated input - output 
void print_date(const Date* p);
Date* scan_date(Date* p);

//utility functions
int cmp_date(const Date* p1, const Date* p2);

#endif // !DATE_H
