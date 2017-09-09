#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

int
main()
{
 ifstream ifs("book.txt");
 istream_iterator<string> in(ifs), eof;
 vector<string>	vec;
 copy(in, eof, back_inserter(vec));
 copy(vec.cbegin(), vec.cend(), ostream_iterator<string>(cout, "\n"));
}
