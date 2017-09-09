#include <iostream>
#include <string>

using namespace std;

void
swap(int * & lhs, int * & rhs)
{
 auto tmp = lhs;
 lhs = rhs;
 rhs = tmp;
}

int
main()
{
 int i = 0, j = 1;
 auto lhs = &i, rhs = &j;
 swap(lhs, rhs);
 cout << *lhs << *rhs << endl;
}
