#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main()
{
 list<const char *> l{"tewwh", "fadsreth", "vxgghw"};
 vector<string> v;
 v.assign(l.begin(), l.end());
 for (auto s : v)
  cout << s << endl;
}
