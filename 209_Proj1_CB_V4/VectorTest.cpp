#include "vector.h"
#include "stocksales.h"

/*

void Test1();
void Test2();
void Test3();

int main() {

    Test1();
    Test2();
    Test3();
}

// test if vector can store price objects and if objects can be worked with
void Test1() {

    Vector <StockSales> tempVec;

	StockSales stock;
	stock.setPrice(5.50);

	StockSales stock2;
	stock2.setPrice(6.50);

    StockSales stock3;
	stock3.setPrice(8.51);

	tempVec.Push_Back(stock);
	tempVec.Push_Back(stock2);
    tempVec.Push_Back(stock3);

//------------------------------------------------------------------

    double highestPrice = 0.00;

	for (unsigned int i = 0; i < tempVec.Length(); i++) {

		if ( tempVec[i].getPrice() > highestPrice) {

		highestPrice = tempVec[i].getPrice();

		}
	}
	cout << "Highest Price: " << highestPrice << endl;

}

// test if vector can store value objects and if objects can be worked with
void Test2() {

    Vector<StockSales> tempVec;

	StockSales stock;
	stock.setValue(103.25);

	StockSales stock2;
	stock2.setValue(258.32);

    StockSales stock3;
	stock3.setValue(265.25);

	tempVec.Push_Back(stock);
	tempVec.Push_Back(stock2);
    tempVec.Push_Back(stock3);

//------------------------------------------------------------------

    double highestValue = 0.00;

	for (unsigned int i = 0; i < tempVec.Length(); i++) {

		if ( tempVec[i].getValue() > highestValue) {
            highestValue = tempVec[i].getValue();

		}
	}
	cout << "Highest Value: " << highestValue << endl;
}

// test if vector can store volume objects and if objects can be worked with
void Test3() {

    Vector<StockSales> tempVec;

	StockSales stock;
	stock.setVolume(2289);

	StockSales stock2;
	stock2.setVolume(2999);

    StockSales stock3;
	stock3.setVolume(1253);

	tempVec.Push_Back(stock);
	tempVec.Push_Back(stock2);
    tempVec.Push_Back(stock3);

//------------------------------------------------------------------

    double highestVolume = 0.00;

	for (unsigned int i = 0; i < tempVec.Length(); i++) {

		if ( tempVec[i].getVolume() > highestVolume) {
            highestVolume = tempVec[i].getVolume();

		}
	}
	cout << "Highest Volume: " << highestVolume << endl;
}

*/
