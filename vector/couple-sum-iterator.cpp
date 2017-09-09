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

 for (auto it = ivec.cbegin(); it != ivec.cend() - 1; it++)
  cout << *it + *(it + 1) << endl;

 for (auto lit = ivec.cbegin(), rit = ivec.cend() - 1; lit < rit; lit++, rit--)
  cout << *lit + *rit << endl;

 if (size % 2)
  cout << *(ivec.cbegin() + size / 2) << endl;
}
