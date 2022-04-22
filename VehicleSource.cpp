/*
* Kurt Kangas
* 4/22/2022
* Week 14 - Inheritance
*/

#include "Suv_C.h"

void Display_Vehicles(Vehicle_C& obj);

int main()
{
	cout << "Vehicle Program";

	cout << "\n\nVehicle:\n";
	string mName;
	int yearB;
	Vehicle_C vehicle;
	cout << "Enter the name of the vehicle manufacturer>";
	getline(cin, mName);
	cout << "Enter the year built>";
	cin >> yearB;
	vehicle.Set_VehicleManufacturer(mName);
	vehicle.Set_YearBuilt(yearB);
	cout << "Vehicle Information:";
	Display_Vehicles(vehicle);

	cout << "\n\nCar:\n";
	int numD;
	Car_C car;
	cout << "Enter the name of the car manufacturer>";
	cin.clear();
	cin.ignore();
	getline(cin, mName);
	cout << "Enter the year built>";
	cin >> yearB;
	cout << "Enter the number of doors>";
	cin >> numD;
	car.Set_VehicleManufacturer(mName);
	car.Set_YearBuilt(yearB);
	car.Set_NumDoors(numD);
	cout << "Vehicle Information:";
	Display_Vehicles(car);

	cout << "\n\nSUV:\n";
	int tankCapacity;
	Suv_C suv;
	cout << "Enter the name of the SUV manufacturer>";
	cin.clear();
	cin.ignore();
	getline(cin, mName);
	cout << "Enter the year built>";
	cin >> yearB;
	cout << "Enter the number of doors>";
	cin >> numD;
	cout << "Enter the gas tank capacity>";
	cin >> tankCapacity;
	suv.Set_VehicleManufacturer(mName);
	suv.Set_YearBuilt(yearB);
	suv.Set_NumDoors(numD);
	suv.Set_GasTank(tankCapacity);
	cout << "Vehicle Information:";
	Display_Vehicles(suv);

	cout << endl << endl;
	system("pause");
	return 0;
}
void Display_Vehicles(Vehicle_C& obj)
{
	obj.displayInfo();
}