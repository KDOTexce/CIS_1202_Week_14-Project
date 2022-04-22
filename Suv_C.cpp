#include "Suv_C.h"

Suv_C::Suv_C() : Car_C()
{
	gasTank = 0;
}

Suv_C::Suv_C(int tankCapacity, int numD, string mName, int yearB) : Car_C(numD, mName, yearB)
{
	gasTank = tankCapacity;
}

void Suv_C::Set_GasTank(int tankCapacity)
{
	gasTank = tankCapacity;
}

int Suv_C::Get_GasTank() const
{
	return gasTank;
}

void Suv_C::displayInfo()
{
	cout << "\nSUV name " << Get_VehicleManufacturer();
	cout << "\nSUV year built " << Get_YearBuilt();
	cout << "\nSUV doors " << Get_NumDoors();
	cout << "\nSUV gas tank capacity " << gasTank;
}
