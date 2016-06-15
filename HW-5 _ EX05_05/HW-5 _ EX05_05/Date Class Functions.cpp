#include "Date.h"


Date::Date()
{
	year = 1900;
	month = 1;
	day = 1;
}

void Date::setDate(int YEAR, int MONTH, int DAY)
{
	year = YEAR;
	month = MONTH;
	day = DAY;
}


int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}






