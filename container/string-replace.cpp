#include <string>
#include <iostream>

using namespace std;

auto replace(string & s, string const & oldVal, string const & newVal)
{
 for (size_t pos = 0; pos <= s.size() - oldVal.size();)
  if (s[pos] == oldVal[0] && s.substr(pos, oldVal.size()) == oldVal)
   s.replace(pos, oldVal.size(), newVal), pos += newVal.size();
  else
   ++pos;
}

int
main()
{
 string s("tho you did not love me, I love thru u.");
 replace(s, "tho", "though");
 replace(s, "thru", "through");
 cout << s << endl;
}
