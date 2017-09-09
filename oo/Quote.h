#ifndef _QUOTE_H_
#define _QUOTE_H_
#include <string>

using namespace std;

class Quote {
public:
 Quote() = default;
 Quote(const string & b, double p): bookNo(b), price(p) {}
 string isbn() const {return bookNo;}
 virtual double net_price(size_t n) const {return n * price;}
 virtual void debug() const;
 virtual ~Quote();
private:
 string bookNo;
protected:
 double price = 0.0;
};

void
Quote::debug() const
{
 std::cout << "data members of this class:\n"
                << "bookNo= " <<this->bookNo << " "
		              << "price= " <<this->price<< " ";
}
#endif
