#include <memory>
#include <iostream>

using namespace std;

void
process(shared_ptr<int> ptr)
{
 cout << ptr.use_count() << endl;
}

int
main()
{
 shared_ptr<int> p(new int(42));
 process(shared_ptr<int>(p));
 cout << p.use_count() << endl;
 auto q = p;
 cout << p.use_count() << endl;
 cout << *p << endl;
}
