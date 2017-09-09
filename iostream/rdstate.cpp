#include <iostream>

using namespace std;

istream &
test(istream & is)
{
 string buf;
 while (is >> buf)
  cout << buf << endl;
 is.clear();
}

int
main()
{
 istream & is = test(cin);
 cout << is.rdstate() << endl;
}
