/**
* @class StockSales
* @brief Class to store and get the stock sales objects
*
*
*
* @author Aisha Khalif
* @version 02
* @date 20/06/2016 - Initial Design
*      22/06/2016 - incorporated date and time classes
*
*
*/

#ifndef StockSales_H
#define StockSales_H

#include "date.h"
#include "time.h"
#include <string>

using namespace std;

//--------------------------------------------------

class StockSales
{

public:

	/**
	*@brief default constructor
	*/
	StockSales();

    /**
	* @brief Standard constructor.
	* @param day, month and year
	*/
	StockSales(const Date& date, const Time& time, float price, int volume, float value);

	/**
	*@brief default destructor
	*/
	~StockSales();

//-------------------------------------------------------------------------------------------

    /**
	*@brief returns the date as the initial string from file
	*@return string date
	*/
	string getStringDate();

    /**
	*@brief returns the time as the initial string from file
	*@return string date
	*/
	string getStringTime();

    /**
	*@brief returns the date for this stock sale
	*/
	Date getDate();

    /**
	*@brief returns the time for this stock sale
	*/
	Time getTime();

    /**
	*@brief returns price
	*@return price
	*/
	float getPrice();

    /**
	*@brief returns value
	*@return value
	*/
	float getValue();

    /**
	*@brief returns volume
	*@return volume
	*/
	int getVolume();

    /**
	*@brief returns condition
	*@return condition
	*/
	string getCondition();

//-------------------------------------------------------------

	/**
	*@brief assigns string date to dateString
	*@param string dateString
	*@return void
	*/
	void setStringDate(string dateString);

	/**
	*@brief assigns string time to timeString
	*@param string timeString
	*@return void
	*/
	void setStringTime(string timeString);

    /**
	*@brief sets the date for this stock sale
	*/
	void setDate();

    /**
	*@brief sets the time for this stock sale
	*/
	void setTime();

    /**
	*@brief assigns price to sPrice
	*@param int sPrice
	*@return void
	*/
	void setPrice(float sPrice);

    /**
	*@brief assigns value to sValue
	*@param int sValue
	*@return void
	*/
	void setValue(float sValue);

    /**
	*@brief assigns volume to sVolume
	*@param int sVolume
	*@return void
	*/
	void setVolume(int sVolume);

    /**
	*@brief assigns condition to sCondition
	*@param int sCondition
	*@return void
	*/
	void setCondition(string sCondition);

	void printDate();
	void printTime();


private:

    // attributes
    float price;
	float value;
	int volume;
	string condition;

	Date date;
	Time time;

	string stringDate;
	string stringTime;

};

#endif
