#include "Vehicle_C.h"

Vehicle_C::Vehicle_C()
{
	vehicleManufacturer = "";
	yearBuilt = 0;
}

Vehicle_C::Vehicle_C(string mName, int yearB)
{
	vehicleManufacturer = mName;
	yearBuilt = yearB;
}

void Vehicle_C::Set_VehicleManufacturer(string mName)
{
	vehicleManufacturer = mName;
}

void Vehicle_C::Set_YearBuilt(int yearB)
{
	yearBuilt = yearB;
}

string Vehicle_C::Get_VehicleManufacturer() const
{
	return vehicleManufacturer;
}

int Vehicle_C::Get_YearBuilt() const
{
	return yearBuilt;
}

void Vehicle_C::DisplayInfo()
{
	cout << "\nVehicle manufacturer " << vehicleManufacturer;
	cout << "\nYear built " << yearBuilt;
}
