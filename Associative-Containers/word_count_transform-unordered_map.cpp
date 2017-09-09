#if 0
#include <unordered_map>
#include <set>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void
wordCounting()
{
 unordered_map<string, size_t> word_count;
 for (string word; cin >> word; ++word_count[word]);
 for (auto const & kv : word_count)
  cout << kv.first << ": " << kv.second << std::endl;
}

int main()
{
 wordCounting();
 //wordTransformation();
}

#else

#include <unordered_map>
#include <string>
#include <fstream> 
#include <iostream>
#include <sstream>
using namespace std;

unordered_map<string, string>
buildMap(ifstream & map_file)
{
 unordered_map<string, string> trans_map;
 for (string key, value; map_file >> key && getline(map_file, value);)
  if (value.size() > 1)
   trans_map[key] = value.substr(1).substr(0, value.find_last_not_of(' '));
 return trans_map;
}

const string &
transform(const string & s, const unordered_map<string, string> & um)
{
 auto map_it = um.find(s);
 return map_it == um.cend() ? s : map_it->second;
 //return m[s];
}

void
word_transform(ifstream & map, ifstream & input)
{
 auto trans_map = buildMap(map);
 for (string text; getline(input, text);) {
  istringstream iss(text);
  for (string word; iss >> word;)
   cout << transform(word, trans_map) << " ";
  cout << endl;
 }
}

int
main()
{
 ifstream ifs_map("word_transformation.txt"), ifs_content("given_to_transform.txt");
 //ifstream ifs_map("word_transformation_bad.txt"), ifs_content("given_to_transform.txt");
 if (ifs_map && ifs_content)
  word_transform(ifs_map, ifs_content);
 else
  cerr << "can't find the documents." << endl;
}
#endif
