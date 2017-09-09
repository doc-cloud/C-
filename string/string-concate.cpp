#include <iostream>
#include <string>

using namespace std;

int main()
{
 string concate;
 for (string str; cin >> str; concate += str + (str.empty() ? "" : " "));
 cout << concate << endl;
}
