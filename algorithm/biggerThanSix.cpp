#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

size_t
biggerThanSix(vector<string> const & v)
{
 return count_if(v.begin(), v.end(), [](string const & s) {
  return s.size() > 6;
 });
}

int
main()
{
 vector<string> v{"alan","moophy","1234567","1234567","1234567","1234567"};
 cout << biggerThanSix(v) << endl;
 int i = 7;
 auto check_and_decrement = [&i]() {return --i ? false : true;};
 while (!check_and_decrement())
  cout << i << " ";
 cout << i << endl;
}
