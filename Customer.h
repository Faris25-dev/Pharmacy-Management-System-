#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <iostream>
using namespace std;

class Customer
{
private:
	string CustomerName_;
	const int CustomerID_;
	string PhoneNumber_;
	string Address_;
public:
    Customer();
    Customer(string CustomerName, int CustomerID, string PhoneNumber,string Address);
	
    string getCustomerName();
    void setCustomerName( string CustomerName);

   
    int getCustomerID();

    string getPhoneNumber();
    void setPhoneNumber(string PhoneNumber);

    
    string getAddress();
    void setAddress(string Address);

    void printCustomerInfo();
};



#endif // CUSTOMER_H