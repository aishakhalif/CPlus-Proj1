/**
* @class StockSalesContainer
* @brief Class to read in data from file and find highest and lowest price. As well as create
*        an output file containing stock sale data.
*
*
*
* @author Aisha Khalif
* @version 03
* @date 20/06/2016
*
*
*/

#ifndef STOCKSALESCONTAINER_H
#define STOCKSALESCONTAINER_H
#include "Vector.h"
#include "StockSales.h"
#include "date.h"
#include "time.h"

//--------------------------------------------------

class StockSalesContainer
{
public:

    /**
	*@brief default constructor
	*/
	StockSalesContainer();

    /**
	*@brief default destructor
	*/
	~StockSalesContainer();

    /**
	*@brief function to populate the vector
	*@return void
	*/
	void FillVector();

    /**
	*@brief function to find the highest price share
	*@return void
	*/
	void HighestPriceShare();

    /**
	*@brief function to find the lowest price share
	*@return void
	*/
	void LowestPriceShare();

    /**
	*@brief function to generate the output.csv file
	*@return void
	*/
	void OutputFile();

    /**
	*@brief prints out the stock information to output stream
	*@return param stock and os
	*/
     //friend ostream & operator << (ostream& os, const StockSales& stock);

private:

    // Vector of stock sale objects
	Vector <StockSales> SalesVector;

	float highestPrice;
	float lowestPrice;
	string highestPriceDate;

	Time time;
	Date date;

};

#endif // STOCKSALESCONTAINER_H
