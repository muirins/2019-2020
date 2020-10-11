/*
	Olivia Knight CSCI 2226-02 Fall 2020
	XYZ Car Rental Program
*/
#include <iostream>
#include <string>
#include "program.h"
using namespace std;

int main()
{
	int choice;
	cout << "--------------------------------------" << endl;
	cout << "XYZ CAR RENTAL" << endl;
	cout << "--------------------------------------" << endl;
	cout << "Please select an option from the menu:" << endl;
	cout << "1. List all Cars \n 2. Add car to inventory \n 3. Remove car from inventory \n 4. List all reservations \n 5. Add a reservation \n 6. Cancel a reservation \n 7. Exit \n" << endl;
	cin >> choice; 
	OptionsMenu(choice);
	return 0;
}