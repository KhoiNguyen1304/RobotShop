#ifndef __ORDER_H
#define __ORDER_H 2016

#include <string>

class Order {
	public:
		Order(int korderNumber, int kmonth, int kdate, int kyear, std::string ktime);

		int GetOrderNumber();
		int GetMonth();
		int GetDate();
		int GetYear();
		std::string GetTime();
		double robotPrice();
		double calculateShipping();
		double calculateTax();
		double totalPrice();


	private:
		int orderNumber;
		int month;
		int date;
		int year;
		std::string time;


};

#endif