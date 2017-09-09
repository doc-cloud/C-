#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

struct PersonInfo {
 string name;
 vector<string> phones;
};

bool
valid(const string & nums)
{
 return	isdigit(nums[0]);
}

string
format(const string & nums)
{
 return nums.substr(0, 3) + "-" + nums.substr(3, 3) + "-" + nums.substr(6);
}

int
main()
{
 string line, word;
 vector<PersonInfo> people;
 istringstream record(line);
 ifstream ifs("PersonInfo.dat");

 if (!ifs) {
  cerr << "No phone numbers." << endl;
  return -1;
 }
 
 while (getline(ifs, line)) {
  PersonInfo info;
  
  record.clear();
  record.str(line);

  record >> info.name;
  
  while (record >> word)
   info.phones.push_back(word);
  
  people.push_back(info);
 }

 for (const auto & entry : people) {
  ostringstream formatted, badNums;
  for (const auto & nums : entry.phones) {
   if (!valid(nums))
    badNums << " " << nums;
   else
    formatted << " " << format(nums);
  }
  if (badNums.str().empty())
   cout << entry.name << formatted.str() << endl;
  else
   cerr << "input error: " << entry.name << "invalid number(s) " << badNums.str() << endl;
 }

 //for (auto & p : people) {
 // cout << p.name << " ";
 // for (auto & s : p.phones)
 //  cout << s << " ";
 // cout << endl;
 //}
}
