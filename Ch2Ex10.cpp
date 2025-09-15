/*
File Name: Ch2Ex10.cpp
Github URL: https://github.com/clk2039/Ch2Ex10.git
Programmer: Kit Miller
Date: September 2025
Requirements: Write a program that calculates how many miles to the gallon a car gets if the car 
holds 15 gallons of gas and can travel 375 miles before refueling.
Display the results on the screen. 
This branch is for a user to add input rather than hard coding.
*/

#include <iostream>
using namespace std;

int main()
{
	int gasTank; // gallons of gas the tank can hold
	int milesToEmpty; // miles the car can travel before refueling
	double milesPerGallon; 
	
	cout << "Enter the number of gallons your gas tank can hold: ";
	cin >> gasTank;
	cout << "Enter the number of miles your car can travel before refueling: ";
	cin >> milesToEmpty;

	milesPerGallon = milesToEmpty / gasTank;

	cout << "If your car can travel " << milesToEmpty << " miles on " << gasTank 
		 << " gallons of gas, it gets about " << milesPerGallon << " miles per gallon." << endl;

	return 0;
}

