#include "Date.h"
#include <string>
#include <ctime>

using namespace std;
void Date::activateTime(int timeElapsed){
	totalSeconds = timeElapsed;
	totalMinutes = totalSeconds / 60;
	totalHours = totalMinutes / 60;
	totalDays = totalHours / 24;
	totalYears = totalDays / 365;
	totalMonths = totalYears * 12;
	currentSecond = totalSeconds % 60;
	currentMinute = totalMinutes % 60;
	currentHour = totalHours % 24;

	day = (totalDays % 365) / 12;
	month = totalMonths % 12;
	year = totalYears + 1970;
}

Date::Date(){
	activateTime(time(0));
}

Date::Date(int secElapsed){
	activateTime(secElapsed);
}

Date::Date(int year, int month, int day){
	this->year = year;
	this->month = month;
	this->day = day;
}

int Date::getDay()const{
	return day;
}

int Date::getMonth()const{
	return month;
}

int Date::getYear() const{
	return year;
}

void Date::setDate(int elapseTime){
	activateTime(elapseTime);
}