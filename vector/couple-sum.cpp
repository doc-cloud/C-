#include <iostream>
#include <vector>
#include <string>

using namespace std;

int
main()
{
 vector<int> ivec;
 for (int num; cin >> num; ivec.push_back(num));
 vector<int>::size_type size = ivec.size();
 for (vector<int>::size_type i = 0; i != size - 1; i++)
  cout << ivec[i] + ivec[i + 1] << endl;

 for (vector<int>::size_type i = 0; i != size / 2; i++)
  cout << ivec[i] + ivec[size - 1 - i] << endl;

 if (size % 2)
  cout << ivec[size / 2] << endl;
}
