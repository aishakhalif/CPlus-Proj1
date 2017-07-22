/**
* @class Date
* @brief Implementation of the Date.h file.
*
*
*
* @author Aisha Khalif
* @version 01
* @date 10/06/2016
*
*
*/

#include "Date.h"

Date::Date() {
	day = 0;
	month = 0;
	year = 0000;
}

// Standard constructor
Date::Date(int day, int month, int year)
{

	setDay(day);
	setMonth(month);
	setYear(year);
}

Date::~Date() {
}

//-------------------------------------------

string Date::getStringDate() {
	return stringDate;
}

int Date::getDay() {
	return day;
}

int Date::getMonth() {
	return month;
}

int Date::getYear() {
	return year;
}

//-------------------------------------------

void Date::setStringDate(string dateString) {
	stringDate = dateString;
}

void Date::setDay(int dDay) {
	day = dDay;
}

void Date::setMonth(int dMonth) {
	month = dMonth;
}

void Date::setYear(int dYear) {
	year = dYear;
}

void Date::parseDate()
{

	int forwardSlash;
	int secondForwardSlash;

	forwardSlash = stringDate.find('/');
	secondForwardSlash = stringDate.find('/', forwardSlash + 1);

	string tempDay = stringDate.substr(0, forwardSlash);
	string tempMonth = stringDate.substr(forwardSlash + 1, 2);
	string tempYear = stringDate.substr(secondForwardSlash + 4);

	/*
	The set methods could be used here to set the date
	but that might be redundant and this was is just shorter
	*/
	day = (atoi(tempDay.c_str()));
	month = (atoi(tempMonth.c_str()));;
	year = (atoi(tempMonth.c_str()));;

}


