#include <iostream>

using namespace std;

int main()
{
	string s1 = "hello";
	string s2 = "world";
	string s3;
	s3 = s1;
	cout << s3 << endl;
	s3 = s1 + s2;
	cout << s3 << endl;
	int len = s3.size();
	cout << len << endl;
	return 0;
}
