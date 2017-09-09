#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace placeholders;

auto
check_size(string const & str, size_t sz) -> bool
{
 return str.size() < sz;
}

int
main()
{
 vector<int> vec{0, 1, 2, 3, 4, 5, 6, 7};
 string str("123456");
 auto result = find_if(vec.begin(), vec.end(), bind(check_size, str, _1));
 if (result != vec.cend())
  cout << *result << endl;
 else
  cout << "Not found" << endl;
}
