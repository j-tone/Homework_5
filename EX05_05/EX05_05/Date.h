#ifndef DATE_H
#define DATE_H
using namespace std;

class Date{
private:
	int year;
	int month;
	int day;
	
	int totalSeconds;
	int totalMinutes;
	int totalHours;
	int totalDays;
	int totalYears;
	int totalMonths;
	int currentSecond;
	int currentMinute;
	int currentHour;

	void activateTime(int timeElapsed);
	
public:
	Date();
	Date(int year, int month, int day);
	Date(int secElapsed);
	int getYear() const;
	int getMonth() const;
	int getDay() const;

	void setDate(int elapseTime);
};

#endif