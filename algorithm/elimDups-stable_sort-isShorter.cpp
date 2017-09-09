#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>
#include <list>

using namespace std;

template <typename Sequence>
auto println(Sequence const & seq) -> ostream &
{
 for (auto const & elem : seq)
  cout << elem << " ";
 return cout << endl;
}

auto eliminate_duplicates(vector<string> & vs) -> vector<string> &
{
 sort(vs.begin(), vs.end());
 auto new_end = unique(vs.begin(), vs.end());
 vs.erase(new_end, vs.end());
 return vs;
}

inline bool
is_shorter(string const & lhs, string const & rhs)
{
 return lhs.size() < rhs.size();
}

int
main()
{
 vector<string> vs{"1234", "1234", "1234", "Hi", "alan", "wang"};
 eliminate_duplicates(vs);
 stable_sort(vs.begin(), vs.end(), is_shorter);
 println(vs);
}
