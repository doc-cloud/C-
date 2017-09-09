#if 0
#include <iostream>
#include <vector>

using namespace std;

using Ptr = vector<int> *;

auto
make_dynamically() -> Ptr
{
 return new vector<int> {};
}

auto
populate(Ptr vec) -> Ptr
{
 for (int i; cin >> i; vec->push_back(i));
 return vec;
}

auto
print(Ptr vec) -> ostream &
{
 for (auto i : *vec)
  cout << i << " ";
 return cout;
}

int
main()
{
 auto vec = populate(make_dynamically());
 print(vec) << endl;
 delete vec;
}
#else
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

using Sptr = shared_ptr<vector<int> >;

auto
make_with_shared_ptr() -> Sptr
{
 return make_shared<vector<int> >();
}

auto
populate(Sptr vec) -> Sptr
{
 for (int i; cin >> i; vec->push_back(i));
 return vec;
}

auto
print(Sptr vec) -> ostream &
{
 for (auto i : *vec)
  cout << i << " ";
 return cout;
}

int
main()
{
 auto vec = populate(make_with_shared_ptr());
 print(vec) << endl;
}
#endif
