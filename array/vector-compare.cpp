#include <iostream>
#include <vector>
#include <iterator>

using std::begin; using std::end; using std::cout; using std::endl; using std::vector;

bool compare(int * const p1b, int * const p1e, int * const p2b, int * const p2e)
{
 if (p1e - p1b != p2e - p2b)
  return false;

 for (int * i = p1b, * j = p2b; i != p1e && j != p2e; ++i, ++j)
  if (*i != *j)
   return false;

 return true;
}

int main()
{
 int arr1[3] = { 0, 1, 2 };
 int arr2[3] = { 0, 2, 4 };

 if (compare(begin(arr1), end(arr1), begin(arr2), end(arr2)))
  cout << "The two arrays are equal." << endl;
 else
  cout << "The two arrays are not equal." << endl;

 vector<int> ivec1 = {0, 1, 2};
 vector<int> ivec2 = {0, 2, 4};

 if (ivec1 == ivec2)
  cout << "The two vectors are equal." << endl;
 else
  cout << "The two vectors are not equal." << endl;

 return 0;
}
