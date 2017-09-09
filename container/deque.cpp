#include <iostream>
#include <string>
//#include <deque>
#include <list>

using namespace std;

int
main()
{
 //deque<string> input;
 list<string> input;
 for (string str; cin >> str; input.push_back(str));
 for (auto iter = input.cbegin(); iter != input.cend(); ++iter)
  cout << *iter << endl;
}
