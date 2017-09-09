#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;
using namespace placeholders;

void
eliminate_duplicates(vector<string> & vs)
{
 sort(vs.begin(), vs.end());
 vs.erase(unique(vs.begin(), vs.end()), vs.end());
}

bool
check_size(const string & s, string::size_type sz)
{
 return s.size() >= sz;
}

void
biggies(vector<string> & v, vector<string>::size_type sz)
{
 eliminate_duplicates(v);
 auto iter = stable_partition(v.begin(), v.end(), bind(check_size, _1, sz));
 for_each(v.begin(), iter, [](const string & s) {cout << s << " ";});
}

int
main()
{
 vector<string> v{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
 biggies(v, 4);
}
