#include <iostream>     // std::cout
#include <algorithm>    // std::count
#include <vector>

using namespace std;

int main ()
{
 int myints[] = {10,20,30,30,20,10,10,20};
 cout << count(myints, myints + 8, 10) << endl;
 vector<int> vec(myints, myints + 8);
 cout << count(vec.begin(), vec.end(), 20) << endl;
 vector<string> l = {"a", "a", "aa", "aa", "aa"};
 cout << count(l.cbegin(), l.cend(), "aa") << endl;
}
