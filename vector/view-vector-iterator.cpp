#include <iostream>
#include <vector>
#include <iterator>
#include <string>

using namespace std;

void
check_and_print(const vector<int> & vec)
{
 cout << vec.size() << endl;
 for (auto it = vec.begin(); it != vec.end(); it++)
  cout << *it << endl;
 cout << endl;
}

void
check_and_print(const vector<string> & vec)
{
 cout << vec.size() << endl;
 for (auto it = vec.begin(); it != vec.end(); it++)
  cout << *it << endl;
 cout << endl;
}

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

 check_and_print(v1);
 check_and_print(v2);
 check_and_print(v3);
 check_and_print(v4);
 check_and_print(v5);
 check_and_print(v6);
 check_and_print(v7);
}
