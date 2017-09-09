#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
using Families = map<string, vector<string> >;

auto
make_families() -> Families
{
 Families families;
 for (string ln; cout << "Last name:" << endl, cin >> ln && ln != "@q";)
  for (string cn; cout << "|-Children's name:" << endl, cin >> cn && cn != "@q";)
   families[ln].push_back(cn);
 return families;
}

auto
print(Families const & families) -> ostream &
{
 for (auto const & family : families) {
  cout << family.first << ":" << endl;
  for (auto const & child : family.second)
   cout << child << " ";
  cout << endl;
 }
}

int
main()
{
 print(make_families());
 return 0;
}
