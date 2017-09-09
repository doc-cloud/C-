#include <iostream>
#include <algorithm>
#include <list>
#include <vector>
#include <iterator>

using namespace std;

int main()
{
 vector<int> vec = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 for (auto rit = vec.crbegin(); rit != vec.crend(); ++rit)
  cout << *rit << " ";

 for (auto it = prev(vec.cend()); true; --it) {
  cout << *it << " ";
  if (it == vec.cbegin()) break;
 }
 
 list<int> lst = {1, 2, 3, 4, 0, 5, 6};
 auto found_0 = find(lst.crbegin(), lst.crend(), 0);
 cout << distance(found_0, lst.crend()) << endl;

 list<int> ret_lst(8 - 3);
 copy(vec.cbegin() + 3, vec.cbegin() + 8, ret_lst.rbegin());
 for (auto i : ret_lst) cout << i << " ";
 std::cout << std::endl;
}
