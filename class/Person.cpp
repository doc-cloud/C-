#include <string>
#include <iostream>

using namespace std;

struct Person;

istream &
read(istream & is, Person & person);

class Person {
//struct Person {
 friend istream &
 read(istream & is, Person & person);

 friend ostream &
 print(ostream & os, Person & person);
public:
 Person() = default;
 Person(const string sname, const string saddr): name(sname), address(saddr) {}
 Person(istream & is) {read(is, *this);}

//public:
 auto get_name() const -> string const & {return name;};
 auto get_addr() const -> string const & {return address;};

private:
 string name;
 string address;
};

istream &
read(istream & is, Person & person)
{
 return is >> person.name >> person.address;
}

ostream &
print(ostream & os, Person & person)
{
 return os << person.name << " " << person.address;
}

int
main()
{
}
