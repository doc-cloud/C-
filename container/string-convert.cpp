#include <iostream>
#include <string>
#include <vector>

using namespace std;

auto sum_for_int(vector<string> const & v) -> int
{
 int sum = 0;
 for (auto const & s : v)
  sum += stoi(s);
 return sum;
}

auto sum_for_float(vector<string> const & v) -> double
{
 double sum = 0;
 for (auto const & s : v)
  sum += stod(s);
 return sum;
}

int main()
{
 vector<string> v = {"1", "2", "3", "4.5"};
 std::cout << sum_for_int(v) << std::endl;
 std::cout << sum_for_float(v) << std::endl;
}
