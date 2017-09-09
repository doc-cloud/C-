#include <iostream>
#include <vector>
#include <string>

using std::vector; 
using std::cout; 
using std::endl; 
using std::string;

int main()
{
 vector<char> v{'f', 'u', 'c', 'k'};
 string s(v.begin(), v.end());
 std::cout << s;
}
