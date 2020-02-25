///Implementation cpp file
#include "Pizza.h"


///Mutator functions
void Pizza::setSize(string a) { size += a; }
void Pizza::setKind(int t)
{
	string b;
	if (t == 1)
		b = "stuffed crust";
	else if (t == 2)
		b = "deep dish";
	else if (t == 3)
		b = "thin crust";
	kind += b;
}
void Pizza::setToppings(string c) { toppings += c; }

///Accessor functions
string Pizza::getKind() { return kind; }
string Pizza::getSize() { return size; }
string Pizza::getToppings() { return toppings; }


///Display function definition
void Pizza::display()
{
		cout << "A" << getSize() << getKind() << " " << "pizza with" << getToppings() << endl;
		cout << "This pizza costs $" << calcPrice() << endl;
		cout << endl;
}


///Function to calculate price
double Pizza::calcPrice()
{
	double sz = 0, crust = 0, price = 0, top = 0;

	if (size == " small")
		sz = 8.00;
	else if (size == " medium")
		sz = 10.00;
	else if (size == " large")
		sz = 12.00;
	if (kind == " thin crust")
		crust = .50;
	else if (kind == " deep dish")
		crust = 1.50;
	else if (kind == " stuffed crust")
		crust = 2.50;
	if (toppings == " cheese" || toppings == " tomato")
		top = .50;
	else if (toppings == " olives" || toppings == " pineapple")
		top = 1.00;
	else if (toppings == " jalapeno" || toppings == " pepperoni")
		top = 1.50;
	else if (toppings == " ham" || toppings == " sausage")
		top = 2.00;

	price = crust + sz + top;
	return price;
}

