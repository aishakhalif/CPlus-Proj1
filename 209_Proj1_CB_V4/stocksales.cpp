/**
* @class StockSales
* @brief Implementation of the StockSales.h file.
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

#include "StockSales.h"
#include <iostream>

//----------------------------------------------

//default constructor
StockSales::StockSales()
{
    date = Date();
    time = Time();
    price = 0.00;
    volume = 0;
    value = 0.00;
}

//default destructor
StockSales::~StockSales(){
}


//------------------------------------------


string StockSales::getStringDate()
{
	return stringDate;
}

string StockSales::getStringTime()
{
	return stringTime;
}

Date StockSales::getDate()
{
	return Date();
}

Time StockSales::getTime()
{
	return Time();
}

float StockSales::getPrice()
{
	return price;
}

float StockSales::getValue()
{
	return value;
}

int StockSales::getVolume()
{
	return volume;
}

string StockSales::getCondition()
{
	return condition;
}

//----------------------------------------------------

void StockSales::setStringDate(string dateString)
{
	stringDate = dateString;
}

void StockSales::setStringTime(string timeString)
{
	stringTime = timeString;
}

void StockSales::setDate()
{

	date.setStringDate(stringDate);
	date.parseDate();

}

void StockSales::setTime()
{
	time.setStringTime(stringTime);
	time.parseTime();
}

void StockSales::setPrice(float sPrice)
{
	price = sPrice;
}

void StockSales::setValue(float sValue)
{
	value = sValue;
}

void StockSales::setVolume(int sVolume)
{
	volume = sVolume;
}
void StockSales::setCondition(string sCondition)
{
	condition = sCondition;
}

void StockSales::printDate()
{
	std::cout << date.getStringDate() << endl;
}

void StockSales::printTime()
{
    std::cout << time.getHour() << ":" << time.getMinute() <<
                ":" << time.getSecond() << ":" << time.getAMPM() << endl;

}


