#include <iostream>
#include <string>

using namespace std;

struct Sales_data;

//struct Sales_data {
class Sales_data {
 friend istream &
 read(istream & is, Sales_data & item);

 friend ostream &
 print(ostream & os, const Sales_data & item);

 friend Sales_data
 add(const Sales_data & lhs, const Sales_data & rhs);

public:
 Sales_data(const string & s, unsigned n, double p): bookNo(s), units_sold(n), revenue(n * p)
 {cout << "Sales_data(const string & s, unsigned n, double p)" << endl;}

 Sales_data(): Sales_data("", 0, 0.0f)
 {cout << "Sales_data()" << endl;}

 Sales_data(const string & s): Sales_data(s, 0, 0.0f)
 {cout << "Sales_data(const string & s)" << endl;}
 
 Sales_data(istream & is);

 string isbn() const {return bookNo;};

 Sales_data & combine(const Sales_data &);

private:
 inline double avg_price() const;

private:
 string bookNo;
 unsigned units_sold = 0;
 double revenue = 0.0;
};

inline
double Sales_data::avg_price() const
{
 return units_sold ? revenue / units_sold : 0;
}

istream &
read(istream & is, Sales_data & item);

ostream &
print(ostream & os, const Sales_data & item);

Sales_data
add(const Sales_data & lhs, const Sales_data & rhs);
