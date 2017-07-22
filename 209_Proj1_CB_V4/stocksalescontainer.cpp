//StockSakesContainer.cpp
//Implements the StockSakesContainer.h class
//
//
//version: 01, Aisha Khalif
//
//----------------------------------------------
#include "stocksalescontainer.h"
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

//----------------------------------------------

/**
* constructor and destructor
*/
StockSalesContainer::StockSalesContainer(void) {
	//ctor
}

StockSalesContainer::~StockSalesContainer(void) {
}

//-------------------------------------------

/**
* Fill Vector function
*/
void StockSalesContainer::FillVector() {


	Vector <StockSales> tempSalesVector;
	string line;
	StockSales sales;
	Date date;

	ifstream inFile("Course_of_sales.csv");
	//ifstream inFile("Cos.csv"); //a smaller file for unit testing purposes - Specifically to test how the file is read in
	//ifstream inFile("Cos2.csv"); //a smaller file for unit testing purposes

	//check if file is open for reading
	if (inFile.is_open()) {

		cout << "File has been opened... Running program..." << endl;

		cout << endl;

	}
	else {
		cout << "Sorry, the file was not found. Please make sure the file is in the correct folder." << endl;
		cin.get();
		exit(0);
	}

	while (!isdigit(inFile.peek())) //skips any line that has no digits
	{
		getline(inFile, line);


		//a test to see if the header line of the file gotten
		//cout << line << endl;
	}


	//read in the relevant data
	while (!inFile.eof())
	{

		// DATE and TIME as seperate strings
		getline(inFile, line, ' ');
		sales.setStringDate(line);
        //cout << line << endl;  //- For unit testing purposes

		getline(inFile, line, ',');
		sales.setStringTime(line);
        //cout << line << endl; //- For unit testing purposes

		//PRICE, VOLUME AND VALUE
		getline(inFile, line, ',');
		sales.setPrice(atof(line.c_str()));
        //cout << line << endl; //- For unit testing purposes

		getline(inFile, line, ',');
		sales.setVolume(atoi(line.c_str()));
        //cout << line << endl; //- For unit testing purposes

		getline(inFile, line, ',');
		sales.setValue(atof(line.c_str()));
        //cout << line << endl; //- For unit testing purposes

		//ignore CONDITION field and go to new line.
		getline(inFile, line);
        //cout << line << endl; //- For unit testing purposes

		//Add objects to vector
		SalesVector.Push_Back(sales);

	}
}

//
// Find Max Price function
//
void StockSalesContainer::HighestPriceShare() {

	highestPrice = 0.00;

	for (unsigned int i = 0; i < SalesVector.Length(); i++) {

		if ( SalesVector[i].getPrice() > highestPrice) {

		highestPrice = SalesVector[i].getPrice();

		}

	}
    cout << "\nDate: ";
	cout << "\nHighest Price: " << highestPrice << endl;
	cout << "Start Time(s): " << endl;


}

void StockSalesContainer::LowestPriceShare() {

	lowestPrice = 0.00;

	for (unsigned int i = 0; i < SalesVector.Length(); i++) {

		if ( SalesVector[i].getPrice() <= lowestPrice) {

		lowestPrice = SalesVector[i].getPrice();

		}

	}
    cout << "\nDate: ";
	cout << "\nLowest Price: " << lowestPrice << endl;
	cout << "Start Time(s): " << endl;

}

//
// Output file function
//
void StockSalesContainer::OutputFile() {

    StockSales tempSalesVector;
	ofstream ofile("output.csv");
	ofile << "Date" << "," << "Start Time" << ","
		<< "Price of share" << "," << "Volume of shares traded"
		<< "," << "Total value of shares traded" << '\n';

}

/*
ostream & operator << (ostream& os, const StockSales& stock)
{
    os << "Date" << "," << "Start Time" << ","
		<< "Price of share" << "," << "Volume of shares traded"
		<< "," << "Total value of shares traded" << "\n"
		<< stock.date << "," << stock.time << "," << stock.price << "," << stock.volume << "," << stock.value << endl;
}
*/






