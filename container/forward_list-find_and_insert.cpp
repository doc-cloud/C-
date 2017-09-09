#include <iostream>
#include <forward_list>

using namespace std;

void find_and_insert(forward_list<string> & text, string const & find_obj, string const & add_obj)
{
 auto prev = text.before_begin();
 for (auto curr = text.begin(); curr != text.end(); prev = curr++) {
  if (*curr == find_obj) {
   text.insert_after(curr, add_obj);
   return;
  }
 }
 text.insert_after(prev, add_obj);
}

int main()
{
 forward_list<string> text = {"string0", "string1", "string2", "string3"};
 find_and_insert(text, "string4", "string1");
 for (auto i : text)
  cout << i << " ";
 cout << endl;
}
