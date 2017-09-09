#include <iostream>
#include <vector>
#include <list>

using namespace std;

int
main()
{
 vector<int> vec1{1, 2, 3, 4, 5};
 vector<int> vec2{1, 2, 3, 4, 5};
 vector<int> vec3{1, 2, 3, 4};
 list<int> list1{1, 2, 3, 4, 5};

 cout << (vec1 == vec2 ? "==" : "!=") << endl;
 cout << (vec2 == vec3 ? "==" : "!=") << endl;
 cout << (vec1 == vector<int>(list1.begin(), list1.end()) ? "==" : "!=") << endl;
}
