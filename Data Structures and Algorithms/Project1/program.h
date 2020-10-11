/*
* XYZ Car Rental program header
* Olivia Knight CSCI 2226-02 Fall 2020
*
*/
#ifndef program_h
#define program_h
#include<string>
#include<iostream>
#include<list>
class Cars
{
protected:
	std::string PlateNumber;
public:

	std::string Make;
	std::string Model;
	enum VehicleType
	{
		SEDAN,
		SUV,
		EXOTIC
	};
	VehicleType sedan = SEDAN;
	VehicleType suv = SUV;
	VehicleType exotic = EXOTIC;
	double PricePerDay;
	bool isAvailable = true;
	void SetAvailable(bool isAvailable)
	{
		isAvailable = true;
	}
	friend int InventoryEdit(int option);
};
class Reservations: public Cars
{
protected:
	std::string name;
public:
	std::string VehicleRented = Cars::PlateNumber;
};
//int continue_task; //When the user wants to quit or select another option after completing a task.
int OptionsMenu(int choice);
void ViewCarsList(std::list <std::string> cars);
void ViewReservationList(std::list <std::string> reservation);
int InventoryEdit(int option);
void ShowMenu();
int ReservationEdit(int option);
#endif // !program_h

