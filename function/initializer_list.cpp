#include <iostream>
#include <initializer_list>

using namespace std;

int
sum(initializer_list<int> & il)
{
 int sum = 0;
 for (auto num : il)
  sum += num;
 return sum;
}

int
main()
{
 auto il = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 std::cout << sum(il) << std::endl;

         return 0;
}
