#include <iostream>
#include <vector>

using std::vector; using std::cout; using std::endl; using std::begin; using std::end;

int
main()
{
 int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 vector<int> v(begin(arr), end(arr));
 for (auto i : v)
  cout << i << endl;

 vector<int> v1{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 int arr1[10];
 for (int i = 0; i != v1.size(); ++i)
  arr1[i] = v1[i];
 for (auto i : arr1)
  cout << i << endl;
 return 0;
}
