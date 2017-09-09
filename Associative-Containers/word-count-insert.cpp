#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <cctype>

using std::string;
using std::cin;
using std::cout;
using std::remove_if;
using Map = std::map<std::string, std::size_t>;

auto
count() -> Map
{
 Map counts;
 for (string w; cin >> w; ++counts[w]) {
  auto result = counts.insert({w, 1});
  if (!result.second)
   ++result.first->second;
 }
 return counts;
}

auto
strip(string & str) -> string const &
{
 for (auto & ch : str)
  ch = tolower(ch);
 //word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
 str.erase(remove_if(str.begin(), str.end(), ispunct), str.end());
 return str;
}

auto
strip_and_count() -> Map
{
 Map counts;
 for (string w; cin >> w; ++counts[strip(w)]);
 return counts;
}

auto
print(Map const & m) -> std::ostream &
{
 for (auto const & kv : m)
  cout << kv.first << ": " << kv.second << std::endl;
}

int
main()
{
 print(count());
 //cin.clear();
 //print(strip_and_count());
}
