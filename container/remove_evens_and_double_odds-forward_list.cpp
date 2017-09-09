#include <iostream>
#include <forward_list>

using namespace std;

auto remove_evens_and_double_odds(forward_list<int> & data)
{
 //for (auto curr = data.begin(); curr != data.end();)
 // if (*curr & 0x1)
 //  curr = data.insert(curr, *curr), advance(curr, 2);
 // else
 //  curr = data.erase(curr);

 for (auto curr = data.begin(), prev = data.before_begin(); curr != data.end();)
  if (*curr & 0x1)
   curr = data.insert_after(prev, *curr), advance(curr, 2), advance(prev, 2);
  else
   curr = data.erase_after(prev);
}

int main()
{
 forward_list<int> data { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
 remove_evens_and_double_odds(data);
 for (auto i : data) cout << i << " ";
}
