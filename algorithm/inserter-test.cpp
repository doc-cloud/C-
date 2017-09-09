#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <iterator>

using namespace std;

template<typename Sequence>
void print(Sequence const & seq)
{
 for (const auto & i : seq)
  cout << i << " ";
}

int
main()
{
 vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};
 
 list<int> l1;
 copy(v.cbegin(), v.cend(), inserter(l1, l1.begin()));
 print(l1);

 list<int> l2;
 copy(v.cbegin(), v.cend(), back_inserter(l2));
 print(l2);

 list<int> l3;
 copy(v.cbegin(), v.cend(), front_inserter(l3));
 print(l3);
}
