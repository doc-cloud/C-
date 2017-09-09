#include <iostream>

using namespace std;

int
main()
{
 const string hexdigits = "0123456789ABCDEF";
 string ret;
 string::size_type n;
 while (cin >> n)
  if (n < hexdigits.size())
   ret += hexdigits[n];
 cout << ret << endl;
}
