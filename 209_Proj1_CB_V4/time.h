/**
* @class Time
* @brief Class to store and get the time objects.
*
*
*
* @author Aisha Khalif
* @version 01
* @date 10/06/2016
*
*
*/

#ifndef Time_H
#define Time_H
#include <string>
#include <iostream>
#include <cstdlib>
using namespace std;

//-------------------------------------------

class Time
{
public:

	/**
	*@brief default constructor
	*/
	Time();

	/**
	* @brief Standard constructor.
	* @param hour, minute, second and ampm
	*/
	Time(int hour, int minute, int second, string AMPM);

	/**
	*@brief default destructor
	*/
	~Time();


	/**
	*@brief returns the time as the initial string from file
	*@return string time
	*/
	string getStringTime();

	/**
	*@brief returns hours
	*@return hour
	*/
	int getHour();

	/**
	*@brief returns minutes
	*@return minute
	*/
	int getMinute();

	/**
	*@brief returns seconds
	*@return second
	*/
	int getSecond();

	/**
	*@brief returns time of date (AM or PM)
	*@return AMPM
	*/
	string getAMPM();


//-----------------------------SETTERS--------------------
	/**
	*@brief assigns string time to timeString
	*@param string timeString
	*@return void
	*/
	void setStringTime(string timeString); //ADDED 20/06

    /**
	*@brief assigns hour to tHour
	*@param int tHour
	*/
	void setHour(int tHour);

	/**
	*@brief assigns minute to tMinute
	*@param int tMinute
	*/
	void setMinute(int tMinute);

	/**
	*@brief assigns second to tSecond
	*@param int tSecond
	*/
	void setSecond(int tSecond);

	/**
	*@brief assigns ampm to tAMPM
	*@param string tAMPM
	*/
	void setAMPM(string tAMPM);
    /**
	*@brief parses the string time to appropriate format (int)
	*@return void
	*/
	void parseTime();
    /**
	*@brief prints the time
	*@return void
	*/
	void printTime();


private:

	/*!
	* Attributes
	*/

	string stringTime; //ADDED 20/6


	int hour;
	int minute;
	int second;
	string AMPM;
};

#endif // Time_H
