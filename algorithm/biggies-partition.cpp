#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void eliminate_duplicates(vector<string> & vs)
{
 sort(vs.begin(), vs.end());
 auto new_end = unique(vs.begin(), vs.end());
 vs.erase(new_end, vs.end());
}

void
biggies_partition(vector<string> & v, size_t sz)
{
 eliminate_duplicates(v);
 auto pivot = partition(v.begin(), v.end(), [sz] (string const & s) {
  return s.size() > sz;
 });
 for (auto it = v.begin(); it != pivot; ++it)
  cout << *it << " ";
}

void
biggies_stable_partition(vector<string> & v, size_t sz)
{
 eliminate_duplicates(v);
 auto pivot = stable_partition(v.begin(), v.end(), [sz] (string const & s) {
  return s.size() > sz;
 });
 for (auto it = v.begin(); it != pivot; ++it)
  cout << *it << " ";
}

int
main()
{
 vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

 vector<string> v1(v);
 biggies_partition(v1, 4);

 vector<string> v2(v);
 biggies_partition(v2, 4);
 cout << endl;
}
