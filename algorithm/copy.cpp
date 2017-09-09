#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

template <typename Sequence>
void print(Sequence const & seq)
{
 for (const auto & i : seq)
  cout << i << " ";
 cout << endl;
}

int main()
{
 // (a)
 vector<int> vec;
 list<int> lst;
 int i;

 while (cin >> i)
  lst.push_back(i);

 copy(lst.cbegin(), lst.cend(), back_inserter(vec));

 print(vec);

 vector<int> v;
 v.reserve(10);
 fill_n(v.begin(), 10, 0);
 print(v);
}
