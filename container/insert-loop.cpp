#include <iostream>
#include <vector>

using namespace std;

int
main()
{
 vector<int> vec;
 int word;
 auto iter = vec.begin();
 while (cin >> word)
  iter = vec.insert(iter, word);
 for (auto i : vec)
  cout << i << endl;
}
