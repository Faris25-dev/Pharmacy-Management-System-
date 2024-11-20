#ifndef MEDICATION_H
#define MEDICATION_H
#include <iostream>
using namespace std;

class Medication
{
private:

	string MedicationName_;
	string description_;
	float Price_;
	int QuantityInStock_;
	int ExpiryDate_;
	int barcode_;
public:

	Medication();

	Medication(string Medname, string des, float price, int quantity, int exp, int barcode);

	void setMedname(string Medname);
	void setdescription(string des);
	void setprice(float price);
	void setQuantity(int quantity);
	void setexpdate(int exp);
	void setbarcode(int barcode);
	string getMedName();
	string getDescription();
	float getPrice();
	int getQuantity();
	int getExpiryDate();
	int getBarcode();
	void printMedicationinfo();
};












#endif