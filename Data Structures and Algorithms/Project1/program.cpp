/*
* Olivia Knight CSCI 2226-02 Fall 2020
* XYZ Car Rental program.cpp 
*/
#include "program.h"
#include <string>
#include <fstream>
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
std::ofstream CarsList("Cars_list.txt");
int next_option;
int car_num; //will be used when deleting cars or adding cars to a reservation
int continue_task;
std::list <std::string> cars_list;
std::list <std::string> reservation_list;

void ViewCarsList(std::list <std::string> cars)
{
	 std::list <std::string> :: iterator z;
	 int i = 1;
	if(cars.empty())
	{
		std::cout << "The cars list is empty, please enter values and try again. \n";
		ShowMenu();
	}
    else
    {
		for (z = cars.begin(); z != cars.end(); ++z)
		{
			std::cout << i << *z << '\n';
			i++;
		}
        

    	ShowMenu();
    }

}
void ViewReservationList(std::list <std::string> reservation)
{
	std::list <std::string> :: iterator y = reservation.begin();
	int res_num = 1;
	if(reservation.empty())
	{
		std::cout << "The reservation list is empty, please enter values first. \n";
		ShowMenu();
	}
    else
    {
		for (y = reservation.begin(); y != reservation.end(); ++y) {
			std::cout << res_num << *y << "\n";
			res_num++;
		}
        
    	ShowMenu();
    }


}
int OptionsMenu(int choice)
{
	switch (choice)
	{
	case 1:
		ViewCarsList(cars_list); //List all cars
		break;
	case 2:
		next_option = 1;
		InventoryEdit(next_option); //Add to the inventory
		break;
	case 3:
		next_option = 2;
		InventoryEdit(next_option); //Remove from inventory
		break;
	case 4:
		ViewReservationList(reservation_list); //List all reservations
		break;
	case 5:
		next_option = 1;
		ReservationEdit(next_option); //Add a reservation
		break;
	case 6:
		next_option = 2;
		ReservationEdit(next_option); //Cancel reservations
		break;
	case 7:
		std::cout << "Thank you for using our service!\n";
		return 0;
		break;
	default:
		std::cout << "Error. Please enter a number between 1-7. Try Again.\n";
		ShowMenu();
	}
}


int InventoryEdit(int option)
{
	std::string car_type;
	std::list<std::string> ::iterator x = cars_list.begin();
	Cars license_plate;
	Cars car_make;
	Cars car_model;
	Cars car_price;
	std::string car_choice; //when a user choses to delete a car from the inventory
	int b = 1; //another counter
	int car_count = 1; //Will act as a way to number the cars in the list
	int type; //Will be used so that the user can choose which enumerated type of car they want.
	if (option == 1)//Add to inventory
	{

		std::cout << "You have selected to add to the inventory. Please enter the following information: \n";

		std::cout << " License Plate Number: " << std::endl;
		std::cin >> license_plate.PlateNumber;

		std::cout << " Car Make: " << std::endl;
		std::cin >> car_make.Make;

		std::cout << " Car Model: " << std::endl;
		std::cin >> car_model.Model;

		std::cout << "Vehicle Type: \n 1. Sedan \n 2. SUV \n 3. Exotic\n";
		std::cin >> type;
		if (type == 1)
		{
			car_type = "Sedan";
		}
		else if (type == 2)
		{
			car_type = "SUV";
		}
		else if (type == 3)
		{
			car_type = "Exotic";
		}

		std::cout << "Price Per Day: "<< std::endl;
		std::cin >> car_price.PricePerDay;
		std::string price = std::to_string(car_price.PricePerDay / 100) + "/day";

		std::string car_info = car_count + ". " + license_plate.PlateNumber + " " + car_make.Make + " " + car_model.Model + " " + car_type + " " + price;
		cars_list.insert(x,car_info);

		CarsList << car_count << " ";
		CarsList << car_info << std::endl;

		
		
		std::cout << "Process Completed. Please enter 1 for more options, 0 to quit.\n" << std::endl;
		std::cin >> continue_task;
		if (continue_task == 0)
		{
			
			std::cout << "Thank you for using our service!\n" << std::endl;

			return 0;
		}
		if (continue_task == 1)
		{
			++car_count;
			ShowMenu();
		}
	}
	if (option == 2) //Remove from inventory
	{
		if (cars_list.empty()) 
		{
			std::cout << "There are no cars in the inventory. Please select something else. \n" << std::endl;
			ShowMenu();
		}
		else 
		{
			std::cout << "Here is a list of the current cars we have in inventory, please enter the number of the car you'd like to remove \n" << std::endl;
			for (x = cars_list.begin(); x != cars_list.end(); ++x)
			{
				std::cout << b << *x << '\n';
				b++;
			}
			x = cars_list.begin();
			std::cin >> car_choice;
			*x = car_choice;
			cars_list.remove(*x);
			
			std::cout << "Process Completed. Please enter 1 for more options, 0 to quit.\n" << std::endl;
			std::cin >> continue_task;

			if (continue_task == 0)
			{

				std::cout << "Thank you for using our service!\n" << std::endl;

				return 0;
			}
			if (continue_task == 1)
			{
				ShowMenu();
			}

		}
		
	}
}

int ReservationEdit(int option) 
{
	std::list<std::string> ::iterator y = cars_list.begin();
	std::string reserve_choice;
	std::string cancel_choice;
	int c = 1;
	if(option == 1) // Add a reservation
	{
		if (cars_list.empty()) {
			std::cout << "We have no cars available for reservation, please select something else\n";
			ShowMenu();
		}
		std::cout << "Here's a list of the current cars we have in our inventory\n";
		for (y = cars_list.begin(); y != cars_list.end(); ++y)
		{
			std::cout << c << *y << '\n';
			c++;
		}
		y = cars_list.begin();
		std::cout << "Please enter the number of the car you'd like to select.\n";
		std::cin >> reserve_choice;
		*y = reserve_choice;
		reservation_list.splice(y, cars_list);
		std::cout << "Process Completed. Please enter 1 for more options, 0 to quit.\n" << std::endl;
		std::cin >> continue_task;

		if (continue_task == 0)
		{

			std::cout << "Thank you for using our service!\n" << std::endl;

			return 0;
		}
		if (continue_task == 1)
		{
			ShowMenu();
		}
		


	}
	if (option == 2) //Remove a reservation
	{
		std::list<std::string>::iterator z = reservation_list.begin();
		if (reservation_list.empty()) {
			std::cout << "There are no reservations on record. Please select another option. \n";
			ShowMenu();
		}
		else{
			c = 1;
			std::cout << "Here's a list of all the reservations we have: \n";
			for (z = reservation_list.begin(); z != reservation_list.end(); ++z) {
				std::cout << c << *z << "\n";
				c++;
			}
			z = reservation_list.begin();
			std::cout << "Please enter the number of the reservation you'd like to cancel";
			std::cin >> cancel_choice;
			*z = cancel_choice;
			reservation_list.remove(*z);
			std::cout << "Process Completed. Please enter 1 for more options, 0 to quit.\n" << std::endl;
			std::cin >> continue_task;

			if (continue_task == 0)
			{

				std::cout << "Thank you for using our service!\n" << std::endl;

				return 0;
			}
			if (continue_task == 1)
			{
				ShowMenu();
			}
		}
		

	}
}
void ShowMenu()
{
	int choices;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "          XYZ CAR RENTAL" << std::endl;
	std::cout << "--------------------------------------" << std::endl;
	std::cout << "Please select an option from the menu:" << std::endl;
	std::cout << " 1. List all Cars \n 2. Add car to inventory \n 3. Remove car from inventory \n 4. List all reservations \n 5. Add a reservation \n 6. Cancel a reservation \n 7. Exit \n" << std::endl;
	std::cin >> choices;
	OptionsMenu(choices);
}

