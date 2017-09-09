#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int
main()
{
 vector<int> vec{1, 2, 3, 4};
 fill_n(vec.begin(), vec.size(), 0);
 for (auto i : vec)
  cout << i << " ";
}
