#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int
main()
{
 istream_iterator<int> in_iter(cin), eof;
 vector<int> vec;
 while (in_iter != eof)
  vec.push_back(*in_iter++);
 sort(vec.begin(), vec.end());
 //copy(vec.cbegin(), vec.cend(), ostream_iterator<int>(cout, " "));
 unique_copy(vec.cbegin(), vec.cend(), ostream_iterator<int>(cout, " "));
}
