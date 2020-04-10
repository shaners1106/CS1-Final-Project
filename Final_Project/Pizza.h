#pragma once
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Pizza
{
public:

	///Default constructor
	Pizza()
	{
		kind = " ";
		size = " ";
		toppings = " ";

	}

	///Mutator functions
	void setSize(string a);
	void setKind(int t);
	void setToppings(string c);

	///Accessor functions
	string getKind();
	string getSize();
	string getToppings();

	///Display function
	void display();

	///calculate price function
	double calcPrice();

private:
	///Member variables:
	string kind;
	string size;
	string toppings;
	double sales;

};


