#include "Car_C.h"

Car_C::Car_C() : Vehicle_C()
{
	numDoors = 0;
}

Car_C::Car_C(int numD) : Vehicle_C()
{
	numDoors = numD;
}

Car_C::Car_C(int numD, string mName, int yearB) : Vehicle_C(mName, yearB)
{
	numDoors = numD;
}

void Car_C::Set_NumDoors(int numD)
{
	numDoors = numD;
}

int Car_C::Get_NumDoors() const
{
	return numDoors;
}

void Car_C::displayInfo()
{
	cout << "\nCar manufacturer " << Get_VehicleManufacturer();
	cout << "\nCar year built " << Get_YearBuilt();
	cout << "\nNumber of doors " << numDoors;
}
