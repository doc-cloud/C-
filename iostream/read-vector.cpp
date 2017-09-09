#include <fstream>
#include <string>
#include <vector>
#include <iostream>
#include <sstream>

using namespace std;

void
ReadFileToVec(const string & filename, vector<string> & vec)
{
 ifstream ifs(filename);
 if (ifs) {
  string buf;
  while (getline(ifs, buf))
   vec.push_back(buf);
 }
}

int
main()
{
 vector<string> vec;
 ReadFileToVec("Jesus", vec);
 for (const auto & str : vec) {
  istringstream iss(str);
  string word;
  while (iss >> word)
   cout << word << endl;
 }
}
