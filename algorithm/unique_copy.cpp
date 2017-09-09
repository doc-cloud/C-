#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

int
main()
{
 vector<int> v{1, 1, 3, 3, 5, 5, 7, 7, 9};
 list<int> l;
 unique_copy(v.begin(), v.end(), back_inserter(l));
 for (auto i : l)
  cout << i << " ";
}
