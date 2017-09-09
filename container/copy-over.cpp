#include <list>
#include <vector>
#include <iostream>

using namespace std;

int
main()
{
 list<int> list0 = {1, 2, 3, 4, 5};
 vector<double> double_vec0(list0.begin(), list0.end());
 vector<int> int_vec = {2, 3, 4, 5, 6};
 vector<double> double_vec1(int_vec.begin(), int_vec.end());

 for (auto & a : double_vec0)
  cout << a << " ";
 cout << endl;
 for (auto & a : double_vec1)
  cout << a << " ";
 cout << endl;
}
