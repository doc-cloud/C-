#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

string
make_plural(size_t ctr, const string & word, const string & ending = "s")
{
 return ctr > 1 ? word + ending : word;
}

int
main()
{
 std::cout << make_plural(1, "success", "es") << endl;
 std::cout << make_plural(2, "success", "es") << endl;

 std::cout << make_plural(1, "failure") << endl;
 std::cout << make_plural(2, "failure") << endl;
}
