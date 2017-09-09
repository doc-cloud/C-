#include <string>
#include <iostream>

using namespace std;

auto insert_erase(string & s, string const & oldVal, string const & newVal)
{
 for (auto curr = s.begin(); curr <= s.end() - oldVal.size();)
  if (oldVal == string{curr, curr + oldVal.size()})
   curr = s.erase(curr, curr + oldVal.size()), curr = s.insert(curr, newVal.begin(), newVal.end()), curr += newVal.size();
  else
   ++curr;
}

int
main()
{
 string s("tho you did not love me, I love thru u.");
 insert_erase(s, "tho", "though");
 insert_erase(s, "thru", "through");
 cout << s << endl;
}
