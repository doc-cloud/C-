#include <iostream>
#include <string>

using namespace std;

class Book {
public:
 Book(unsigned isbn, string const & name, string const & author, string const & pubdate):
  isbn_(isbn), name_(name), author_(author), pubdate_(pubdate)
 {}
 explicit Book(istream & is)
 {
  is >> isbn_ >> name_ >> author_ >> pubdate_;
 }
private:
 unsigned isbn_;
 string name_;
 string author_;
 string pubdate_;
};
