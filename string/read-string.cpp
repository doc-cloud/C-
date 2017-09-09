#include <cstring>
#include <iostream>

//using namespace std::cin;
//using namespace std::cout;

using namespace std;

int
main()
{
#if 0
 string word;
 while (cin >> word)
  cout << word << endl;
#endif
 string line;
 while (getline(cin, line))
  cout << line << endl;
 return 0;
}
