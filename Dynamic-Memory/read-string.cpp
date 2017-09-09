#include <iostream>

using namespace std;

int
main()
{
 int size{0};
 cin >> size;
 char *input = new char [size + 1]();
 cin.ignore();
 cin.get(input, size + 1);
 cout << input;
 delete [] input;
}
