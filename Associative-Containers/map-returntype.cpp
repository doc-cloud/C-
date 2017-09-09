#include <iostream>
#include <map>
#include <string>
#include <typeinfo>

using namespace std;

int
main()
{
 map<int, string> m = {{1,"ss"}, {2,"sz"}};
 using KeyType = map<int, string>::key_type;
 cout << typeid(KeyType).name() << endl;
 cout << typeid(decltype(m[1])).name() << endl;
}
