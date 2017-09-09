#include <iostream>
#include <sstream>

using namespace std;

istream &
test(istream & is)
{
 string buf;
 while (is >> buf)
  cout << buf << endl;
 is.clear();
 return is;
}

int
main()
{
 istringstream iss("Jesus");
 istream & is = test(iss);
 //cout << is.rdstate() << endl;
}
