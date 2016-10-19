#include "Order.h"
#include <string>

Order::Order(int korderNumber, int kmonth, int kdate, int kyear, std::string ktime) :
			orderNumber(korderNumber), month(kmonth), date(kdate), year(kyear), time(ktime) {}

int Order::GetOrderNumber() { return orderNumber; }
int Order::GetMonth() { return month; }
int Order::GetDate() { return date; }
int Order::GetYear() { return year; }
std::string Order::GetTime() { return time; }