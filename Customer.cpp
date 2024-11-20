#include "Customer.h"
#include <iostream>
using namespace std;

Customer::Customer():CustomerName_("No Name"), CustomerID_(0), PhoneNumber_(" "), Address_(" ") {}
Customer::Customer(string CustomerName, int CustomerID, string PhoneNumber, string Address):CustomerName_(CustomerName),CustomerID_(CustomerID),PhoneNumber_(PhoneNumber),Address_(Address){}

string Customer::getCustomerName()  {
    return CustomerName_;
}

void Customer::setCustomerName(string CustomerName) {
    CustomerName_ = CustomerName;
}


int Customer::getCustomerID() { return CustomerID_; }

string Customer::getPhoneNumber() { return PhoneNumber_; }
void Customer::setPhoneNumber(string PhoneNumber) { PhoneNumber_ = PhoneNumber; }


string Customer::getAddress() { return Address_; }
void Customer::setAddress(string Address) { Address_ = Address; }
void Customer::printCustomerInfo()
{
    cout << "Customer Info: " << endl << " Customer Name: " << getCustomerName() << endl << " Customer ID: " << getCustomerID() << endl << " Customer phone Number: " << getPhoneNumber() << endl << " Customer Address: " << getAddress() << endl;

}
