/**
* @class Main
*
* @author Aisha Khalif
* @version 01
* @date 10/06/2016
*
*
*/
#include <iostream>
#include "StockSalesContainer.h"


using namespace std;

//------------------------------------------------



int menu();


// main function


int main()
{

	StockSalesContainer container;
	container.FillVector();

	menu();

}


// menu function
int menu() {

	StockSalesContainer container;;
	int option;

	cout << "\nWelcome to Course of Sales!" << endl
		<< "\nPlease select an option:" << endl;

	do {

		cout << endl
			<< "1: Find the highest share price times" << endl
			<< "2: Find the lowest share price times" << endl
			<< "3: Output data into a new file" << endl
			<< "4: Exit program" << endl;

		cin >> option;

		cout << endl;

		switch (option)
		{
		case 1:
			container.HighestPriceShare();
			break;

		case 2:
			container.LowestPriceShare();
			break;

		case 3:
			container.OutputFile();
			cout << "An Output.csv file has been created" << endl;
			break;

		case 4:
			break;


		default: cout << option << " is not a valid option. Please only enter a number between 1 and 4" << endl;
			cout << endl;
		}


	} while (option != 4);


	return option;
}


