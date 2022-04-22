#ifndef Vehicle_C_
#define Vehicle_C_

#include <iostream>
#include <string>

using namespace std;

class Vehicle_C
{
private:
	string vehicleManufacturer;
	int yearBuilt;

public:
	Vehicle_C();
	Vehicle_C(string, int);

	void Set_VehicleManufacturer(string);
	void Set_YearBuilt(int);

	string Get_VehicleManufacturer() const;
	int Get_YearBuilt() const;

	virtual void displayInfo();

};
#endif
