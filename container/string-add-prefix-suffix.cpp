#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

#if 0
auto add_pre_and_suffix(string & name, string const & prefix, string const & suffix)
{
 name.insert(name.begin(), prefix.cbegin(), prefix.cend());
 return name.append(suffix);
}
#endif

auto add_pre_and_suffix(string & name, string const & prefix, string const & suffix)
{
 name.insert(0, prefix);
 return name.insert(name.size(), suffix);
}

int main()
{
     string name("Wang");
         cout << add_pre_and_suffix(name, "Mr.", ", Jr.") << endl;
	     return 0;
}
