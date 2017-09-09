#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
#include <functional>

using namespace std;

int
main()
{
 using placeholders::_1;

 vector<int> ivec{1, 11, 111, 1111};
 cout << count_if(ivec.cbegin(), ivec.cend(), bind(greater<int>(), _1, 1024)) << endl;

 vector<string> svec{"pooh", "pooh", "pezy", "pooh"};
 cout << *find_if(svec.cbegin(), svec.cend(), bind(not_equal_to<string>(), _1, "pooh")) << endl;

 transform(ivec.begin(), ivec.end(), ivec.begin(), bind(multiplies<int>(), _1, 2));
 for (int i : ivec)
  cout << i << " ";
}
