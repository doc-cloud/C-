#include <iostream>
#include <cstring>

using namespace std;

int
main()
{
 string str;
 //cin >> str;
 getline(cin, str);

#if 0
 for (string::size_type i = 0; i < str.size(); i++)
  if (isascii(str[i]))
   str[i] = 'X';
#endif

 //for (auto &c : str)
 //for (char &c : str)
 for (char c : str)
  c = 'X';

 cout << str << endl;
}
