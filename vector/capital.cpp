#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int
main()
{
 vector<string> ivec;

#if 0
 string str;
 
 while (cin >> str) {
  //if (isdigit())
  ivec.push_back(str);
 }

 for (auto & i : ivec)
  if (islower(i[0]))
   i[0] += 'A' - 'a';
#endif

 for (string word; cin >> word; ivec.push_back(word));

 for (auto & str : ivec)
  for (auto & c : str)
   c = toupper(c);

 for (auto i : ivec)
  cout << i << endl;
}
