#include "Medication.h"
#include "Customer.h"
#include <iostream>
using namespace std;


int main()
{
	Medication medication1("Aspirin", "Pain reliever", 9.99, 100, 20251231, 123456789);
	Customer c1("John Doe", 12345, "555-1234", "123 Elm Street");;
	medication1.printMedicationinfo();
	c1.printCustomerInfo();
}