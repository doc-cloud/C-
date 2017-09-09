#include <map>
#include <set>
#include <string>
#include <iostream>

using namespace std;

int
main()
{
 multimap<string, string> authors {
  { "alan", "DMA" },
  { "pezy", "LeetCode" },
  { "alan", "CLRS" },
  { "wang", "FTP" },
  { "pezy", "CP5" },
  { "wang", "CPP-Concurrency" }
 };

 string author = "pezy";
 string work = "CP5";

 auto found = authors.find(author);
 auto count = authors.count(author);

 while (count) {
  if (found->second == work) {
   authors.erase(found);
   break;
  }
  ++found;
  --count;
 }

 for (const auto & author : authors)
  cout << author.first << " " << author.second << endl;

 map<string, multiset<string> > order_authors;
 for (const auto & author : authors)
  order_authors[author.first].insert(author.second);
 for (const auto & author : order_authors) {
  cout << author.first << ": ";
  for (const auto & work : author.second)
   cout << work << " ";
  cout << endl;
 }
}
