#include <cstdio>
#include <iostream>

using namespace std;

/*
int
sub(int x, int y)
{
 return x + y;
}

int
Minus(int x, int y)
{
 return x - y;
}

int
Jug(int x, int y)
{
 if (x >= 0)
  return x;
 else if (y == 0)
  return x;
 else
  return x / y;
}

void
test(int (*p)(int, int), int a, int b)
{
 int Int1;
 Int1 = (*p)(a, b);
 cout << a << b << Int1;
}

int
main()
{
 int a = 1, b = 2, c = 3, d = 4, e = -5;

 test(sub, a, b);
 test(Minus, c, d);
 test(Jug, e, b);
}
*/

template <class T>
class Operate {
public:
 static T Add(T a, T b) {return a + b;}
 static T Mul(T a, T b) {return a * b;}
 static T Jud(T a, T b = 1)
 {
  if (a >= 0)
   return a;
  else
   return a / b;
 }
};

int
main()
{
 int A, B, C, D, E, x, y, z;
 A = 1, B = 2, C = 3, D = 4, E = 5;
 x = Operate<int>::Add(A, B);
 y = Operate<int>::Mul(C, D);
 z = Operate<int>::Jud(E, B);
 cout << x << '\n' << y << '\n' << z << endl;
}
