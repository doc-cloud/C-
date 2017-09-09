#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

//using namespace std;

int main()
{
     string numbers{ "123456789" };
         string alphabet{ "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
	     string str{ "ab2c3d7R4E6" };
 //for (int pos = 0; (pos = str.find_first_of(numbers, pos)) != string::npos; ++pos)
 for (int pos = 0; (pos = str.find_first_not_of(alphabet, pos)) != string::npos; ++pos)
  cout << str[pos] << " ";
 cout << endl;
 //for (int pos = 0; (pos = str.find_first_of(alphabet, pos)) != string::npos; ++pos)
 for (int pos = 0; (pos = str.find_first_not_of(numbers, pos)) != string::npos; ++pos)
  cout << str[pos] << " ";
 cout << endl;
}
