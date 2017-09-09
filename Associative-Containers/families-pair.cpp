#include <iostream>
#include <map>
#include <string>

using namespace std;

auto
print(multimap<string, string> families) -> ostream &
{
 for (auto const & child : families)
  cout << child.first << " " << child.second << endl;
}

int
main()
{
 multimap<string, string> families;
 for (string l, f; cin >> l >> f; families.emplace(l, f));
 print(families);
 return 0;
}
