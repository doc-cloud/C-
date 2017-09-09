#include <string>
#include <string.h>
#include <iostream>

using namespace std;

int
main()
{
 char *concatenate_string = new char [strlen("str0" "str1") + 1];
 strcat(concatenate_string, "str0");
 strcat(concatenate_string, "str1");
 cout << concatenate_string << endl;
 delete [] concatenate_string;

 string str0{"str0"}, str1{"str1"};
 cout << str0 + str1 << endl;
}
