#include <iostream>
#include <iomanip>

using namespace std;

class C {
public:
 C(int i): m_Count(i) {}
 int incr() const
 {
  return ++m_Count;
 }
private:
 mutable int m_Count;
};

int
main()
{
 C c1(0), c2(10);
 for (int tmp, i = 0; i < 10; ++i) {
  tmp = c1.incr();
  cout << setw(tmp) << setfill(' ') << tmp << endl;
  tmp = c2.incr();
  cout << setw(tmp) << setfill(' ') << tmp << endl;
 }
}
