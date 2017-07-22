/**
* @class Time
* @brief Implementation of the Time.h class
*
*
*
* @author Aisha Khalif
* @version 01
* @date 10/06/2016
*
*
*/

#include "Time.h"


//-----------------------------------------------

/**
* constructor and destructor
*/

Time::Time() {
	hour = 0;
	minute = 0;
	second = 0;
}

//standard constructor
Time::Time(int hour, int minute, int second, string AMPM)
{

	setHour(hour);
	setMinute(minute);
	setSecond(second);
	setAMPM(AMPM);
}

Time::~Time(void) {
}

//-------------------------------------------


string Time::getStringTime() {

	return stringTime;
}

int Time::getHour() {
	return hour;
}

int Time::getMinute() {
	return minute;
}

int Time::getSecond() {
	return second;
}

string Time::getAMPM() {
	return AMPM;
}

//-------------------------------------------

void Time::setStringTime(string timeString) {
	stringTime = timeString;
}

void Time::setHour(int tHour) {
	hour = tHour;
}

void Time::setMinute(int tMinute) {
	minute = tMinute;
}

void Time::setSecond(int tSecond) {
	second = tSecond;
}

void Time::setAMPM(string tAMPM) {
	AMPM = tAMPM;
}

void Time::parseTime()
{
	int colonIndex;
	int secondColonIndex;
	int spaceIndex;

	spaceIndex = stringTime.find(' '); //THE SPACE BEFORE PM/AM
	colonIndex = stringTime.find(':');
	secondColonIndex = stringTime.find(':', colonIndex + 1);


	string stringHour = stringTime.substr(0 + colonIndex);
	string stringMinute = stringTime.substr(colonIndex + 1, 2);
	string stringSecond = stringTime.substr(secondColonIndex + 1, 2);
	string stringAMPM = stringTime.substr(spaceIndex + 1);

	stringAMPM = AMPM;

	if (AMPM == "PM")
	{
		hour = 12 + (atoi(stringHour.c_str()));
	}
	else
	{
		/*
		The set methods could be used here to set the times
		but that might be redundant and this was is just shorter
		*/
		hour = (atoi(stringHour.c_str()));
		minute = (atoi(stringMinute.c_str()));;
		second = (atoi(stringSecond.c_str()));;
	}

}




