///CS 171
///Final Project
///Pizza Orders


#include <iostream>
#include <iomanip>
#include <string>
#include "Pizza.h"
using namespace std;


int main()
{
	///Initialize my pizza array that will hold my 5 pizza orders
	Pizza array[5];
	string a, c;
	int t;
	cout << endl;
	cout << "Hello.  Today you will build 5 pizzas." << endl;
	cout << "We offer 3 pizza sizes (small, medium or large)" << endl;
	cout << "and 3 different crust choices (stuffed crust, deep dish, or thin crust)." << endl;
	cout << "Because it's our first day of operations, we're going to limit you to 1 topping pizzas." << endl;
	cout << endl;
	cout << "Before I begin taking your order, let's breakdown our prices." << endl;
	cout << "Our base prices are: " << endl;
	cout << "small   = $8" << endl;
	cout << "medium = $10" << endl;
	cout << "large   = 12" << endl;
	cout << endl;
	cout << "Your topping choices are:" << endl;
	cout << endl;
	cout << " $.50              $1.00                  $1.50              $2.00" << endl;
	cout << "cheese            olive                  pepperoni            ham" << endl;
	cout << "tomato            pineapple              jalapeno             sausage" << endl;
	cout << endl;
	cout << "Also, thin crust pizza is $.50, deep dish is $1.50 & stuffed crust will be $2.50." << endl;
	cout << endl;

	///Build pizza #1

	cout << "Let's begin with your first pizza order." << endl;
	cout << endl;
	cout << "Size: small, medium or large ? " << endl;
	cin >> a;
	while (a != "small" && a != "medium" && a != "large")
	{
		cout << "Oops!  You must have accidently hit a wrong button.  Please try again, small, medium or large? " << endl;
		cin >> a;
	}

	cout << endl;
	cout << "Ok, now, enter the number of the style of pizza you'd like: (1) = stuffed crust" << endl;
	cout << "                                                            (2) = deep dish" << endl;
	cout << "                                                            (3) = thin crust " << endl;
	cin >> t;
	while (t != 1 && t != 2 && t != 3)
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> t;
	}

	cout << endl;
	cout << "For your first pizza, what topping would you like? " << endl;
	cin >> c;
	while (c != "cheese" && c != "pepperoni" && c != "olives" && c != "ham" && c != "pineapple" && c != "jalapeno" && c != "sausage" && c != "tomato")
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> c;
	}


	array[0].setSize(a);
	array[0].setKind(t);
	array[0].setToppings(c);
	cout << endl;
	cout << "Order #1:" << endl;
	array[0].display();


	///Build pizza #2

	cout << endl;
	cout << "Let's move on to your next pizza...small, medium or large? " << endl;
	cin >> a;
	while (a != "small" && a != "medium" && a != "large")
	{
		cout << "Oops!  You must have accidently hit a wrong button.  Please try again, small, medium or large? " << endl;
		cin >> a;
	}

	cout << "Ok, now, enter the number of the style of pizza you'd like: (1) = stuffed crust" << endl;
	cout << "                                                            (2) = deep dish" << endl;
	cout << "                                                            (3) = thin crust " << endl;
	cin >> t;
	while (t != 1 && t != 2 && t != 3)
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> t;
	}

	cout << endl;
	cout << "What topping would you like? " << endl;
	cin >> c;
	while (c != "cheese" && c != "pepperoni" && c != "olives" && c != "ham" && c != "pineapple" && c != "jalapeno" && c != "sausage" && c != "tomato")
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> c;
	}


	array[1].setSize(a);
	array[1].setKind(t);
	array[1].setToppings(c);
	cout << endl;
	cout << "Order #2:" << endl;
	array[1].display();


	///Build pizza #3

	cout << endl;
	cout << "Next pizza...small, medium or large? " << endl;
	cin >> a;
	while (a != "small" && a != "medium" && a != "large")
	{
		cout << "Oops!  You must have accidently hit a wrong button.  Please try again, small, medium or large? " << endl;
		cin >> a;
	}

	cout << "Ok, now, enter the number of the style of pizza you'd like: (1) = stuffed crust" << endl;
	cout << "                                                            (2) = deep dish" << endl;
	cout << "                                                            (3) = thin crust " << endl;
	cin >> t;
	while (t != 1 && t != 2 && t != 3)
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> t;
	}

	cout << endl;
	cout << "And what topping would you like? " << endl;
	cin >> c;
	while (c != "cheese" && c != "pepperoni" && c != "olives" && c != "ham" && c != "pineapple" && c != "jalapeno" && c != "sausage" && c != "tomato")
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> c;
	}


	array[2].setSize(a);
	array[2].setKind(t);
	array[2].setToppings(c);
	cout << endl;
	cout << "Order #3:" << endl;
	array[2].display();


	///Build pizza #4

	cout << endl;
	cout << "For your 4th pizza, small, medium or large? " << endl;
	cin >> a;
	while (a != "small" && a != "medium" && a != "large")
	{
		cout << "Oops!  You must have accidently hit a wrong button.  Please try again, small, medium or large? " << endl;
		cin >> a;
	}

	cout << "Ok, now, enter the number of the style of pizza you'd like: (1) = stuffed crust" << endl;
	cout << "                                                            (2) = deep dish" << endl;
	cout << "                                                            (3) = thin crust " << endl;
	cin >> t;
	while (t != 1 && t != 2 && t != 3)
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> t;
	}

	cout << endl;
	cout << "For your fourth pizza, what topping would you like? " << endl;
	cin >> c;
	while (c != "cheese" && c != "pepperoni" && c != "olives" && c != "ham" && c != "pineapple" && c != "jalapeno" && c != "sausage" && c != "tomato")
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> c;
	}


	array[3].setSize(a);
	array[3].setKind(t);
	array[3].setToppings(c);
	cout << endl;
	cout << "Order #4:" << endl;
	array[3].display();


	///Build the final pizza

	cout << endl;
	cout << "Awesome, we're now on to your last pizza." << endl;
	cout << "small, medium or large? " << endl;
	cin >> a;
	while (a != "small" && a != "medium" && a != "large")
	{
		cout << "Oops!  You must have accidently hit a wrong button.  Please try again, small, medium or large? " << endl;
		cin >> a;
	}

	cout << "Ok, now, enter the number of the style of pizza you'd like: (1) = stuffed crust" << endl;
	cout << "                                                            (2) = deep dish" << endl;
	cout << "                                                            (3) = thin crust " << endl;
	cin >> t;
	while (t != 1 && t != 2 && t != 3)
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> t;
	}

	cout << endl;
	cout << "For your last pizza, what topping would you like? " << endl;
	cin >> c;
	while (c != "cheese" && c != "pepperoni" && c != "olives" && c != "ham" && c != "pineapple" && c != "jalapeno" && c != "sausage" && c != "tomato")
	{
		cout << "Oops!  You must have accidently entered something wrong.  Please try again: " << endl;
		cin >> c;
	}

	array[4].setSize(a);
	array[4].setKind(t);
	array[4].setToppings(c);
	cout << endl;
	cout << "Order #5:" << endl;
	array[4].display();


	cout << endl;
	cout << endl;
	double total = 0;
	for (int w = 0; w < 5; w++)
	{
		total += array[w].calcPrice();
	}
	cout << "The total bill for your 5 pizzas today is: $" << fixed << showpoint << setprecision(2) << total << endl;
	cout << endl;

	return 0;
}






