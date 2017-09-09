#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

#include <regex>
using std::regex;
using std::regex_error;

int main()
{
#if 0
 try {
  regex r("[[:alnum:]+\\.(cpp|cxx|cc)$", regex::icase);
 } catch (regex_error e) {
  cout << e.what() << " code " << e.code() << endl;
 }
#endif

 regex r("[[:alpha:]]*[^c]ei[[:alpha:]]*", regex::icase);
 r.assign("[^c]ei", regex::icase);
 string s;
 cout << "Please input a word! Input 'q' to quit!" << endl;
 while (cin >> s && s != "q") {
  if (regex_match(s, r))
   cout << "Input word " << s << " is okay!" << endl;
  else
   cout << "Input word " << s << " is not okay!" << endl;

  cout << "Please input a word! Input 'q' to quit!" << endl;
 }
 cout << endl;
}
