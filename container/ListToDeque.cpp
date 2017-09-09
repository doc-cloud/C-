#include <iostream>
#include <deque>
#include <list>

using namespace std;

int
main()
{
 list<int> l{1, 2, 3, 4, 5, 6, 7};
 deque<int> odd, even;
 for (auto i : l)
  (i & 0x1 ? odd : even).push_back(i);
 for (auto i : odd)
  cout << i << endl;
 for (auto i : even)
  cout << i << endl;
}
