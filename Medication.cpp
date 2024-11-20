#include "Medication.h"
#include <iostream>
using namespace std;


Medication::Medication():MedicationName_("No Name"), description_(" "), Price_(0), QuantityInStock_(0), ExpiryDate_(0000), barcode_(0)
{}
Medication::Medication(string Medname, string des, float price, int quantity, int exp, int barcode):MedicationName_(Medname), description_(des), Price_(price), QuantityInStock_(quantity), ExpiryDate_(exp), barcode_(barcode)
{}
void Medication::setMedname(string Medname)
{
	MedicationName_= Medname;
}
void Medication::setdescription(string des)
{
	description_ = des;
}
void Medication::setprice(float price) {
	Price_ = price;
}
void Medication::setQuantity(int quantity) {
	QuantityInStock_ = quantity;
}
void Medication::setexpdate(int exp){
	ExpiryDate_ = exp;
}
void Medication::setbarcode(int barcode){
	barcode_ = barcode;
}
string Medication::getMedName() {
	return MedicationName_;
}
string Medication::getDescription() { return description_; }
float Medication::getPrice() { return Price_; }
int Medication::getQuantity() { return QuantityInStock_; }
int Medication::getExpiryDate() { return ExpiryDate_; }
int Medication::getBarcode() { return barcode_; }
void Medication::printMedicationinfo()
{
cout << "Medication Info " << endl << " Medication Name: " << getMedName() << endl << " Medication Description: " << getDescription() << endl << " Medication Price: " << getPrice() << endl << " Medication Quantity in stock: " << getQuantity() << endl << " Medication Exp Date: " << getExpiryDate() << endl << " Medication Barcode: " << getBarcode() << endl;
}