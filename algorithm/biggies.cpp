#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

auto eliminate_duplicates(vector<string> & vs) -> vector<string> &
{
 sort(vs.begin(), vs.end());
 auto new_end = unique(vs.begin(), vs.end());
 vs.erase(new_end, vs.end());
 return vs;
}

void
biggies(vector<string> & v, size_t sz)
{
 eliminate_duplicates(v);
 stable_sort(v.begin(), v.end(), [] (string const & lhs, string const & rhs) {
  return lhs.size() < rhs.size();
 });
 auto wc = find_if(v.begin(), v.end(), [sz] (string const & s) {
  return s.size() > sz;
 });
 for_each(wc, v.end(), [] (const string & s) {
  cout << s << " ";
 });
}

int
main()
{
 vector<string> v{"1234","1234","1234","hi~", "alan", "alan", "cp"};
 biggies(v, 3);
 cout << endl;
}
