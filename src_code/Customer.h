#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include <string>

class Customer {
	public:
		Customer(std::string kname, std::string kcusNumber, double kwallet);
		std::string GetName();
		std::string GetCusNumber();
		double GetWallet();
	private:
		std::string name;
		std::string cusNumber;
		double wallet;
};
#endif