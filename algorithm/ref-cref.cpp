#include <functional>
#include <iostream>

using namespace std;

void
f(int & n1, int & n2, const int & n3)
{
 cout << "In function : " << n1 << " " << n2 << " " << n3 << endl;
 ++n1;
 ++n2;
}

int
main()
{
 int n1 = 1, n2 = 2, n3 = 3;
 function<void()> bound_f = bind(f, n1, ref(n2), cref(n3));
 n1 = 11;
 n2 = 12;
 n3 = 13;
 cout << n1 << " " << n2 << " " << n3 << endl;
 bound_f();
 cout << n1 << " " << n2 << " " << n3 << endl;
}
