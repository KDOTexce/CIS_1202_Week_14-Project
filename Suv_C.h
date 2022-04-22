#ifndef Suv_C_
#define Suv_C_

#include "Car_C.h"

class Suv_C : public Car_C
{
private:
	int gasTank;
public:
	Suv_C();

	Suv_C(int, int, string, int);

	void Set_GasTank(int);

	int Get_GasTank() const;

	virtual void displayInfo();

};
#endif
