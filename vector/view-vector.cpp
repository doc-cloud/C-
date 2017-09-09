#include <iostream>
#include <vector>
#include <string>

using namespace std;

int
main()
{
 vector<int> v1;
 vector<int> v2(10);
 vector<int> v3(10, 42);
 vector<int> v4{10};
 vector<int> v5{10, 42};
 vector<string> v6{10};
 vector<string> v7{10, "hi"};

 cout << v1.size() << endl;
 for (auto i : v1)
  cout << i << endl;
 cout << endl;

 cout << v2.size() << endl;
 for (auto i : v1)
  cout << i << endl;
 cout << endl;
 
 cout << v3.size() << endl;
 for (vector<int>::size_type i = 0; i < v3.size(); i++)
  cout << v3[i] << endl;
 cout << endl;
 
 cout << v4.size() << endl;
 cout << v5.size() << endl;
 cout << v6.size() << endl;
 cout << v7.size() << endl;
}
