#include <string>
#include <iostream>

#define REF_VER 0

using namespace std;

class HasPtr {
public:
 friend void
 swap(HasPtr &, HasPtr &);
 HasPtr(const string & s = string()): ps(new string(s)), i(0) {}
 HasPtr(const HasPtr & hp): ps(new string(*hp.ps)), i(hp.i) {}
 HasPtr &
 operator = (const HasPtr & rhs)
 {
#if REF_VER == 1
  ++*rhs.use;
  if (--*use == 0) {
   delete ps;
   delete use;
  }
  ps = rhs.ps;
  i = rhs.i;
  use = rhs.use;
#else
  if (this != &rhs) {
   string *t_ps = new string(*rhs.ps);
   delete ps;
   ps = t_ps;
   i = rhs.i;
  }
#endif
  return *this;
 }
 ~HasPtr()
 {
#if REF_VER == 1
  if (--*use == 0)
#endif
  delete ps;
#if REF_VER == 1
  delete use;
#endif
 }
 void
 show()
 {
  std::cout << *ps << std::endl;
 }
private:
 string *ps;
 int i;
#if REF_VER == 1
 size_t *use;
#endif
};

inline void
swap(HasPtr & lhs, HasPtr & rhs)
{
 using std::swap;
 swap(lhs.ps, rhs.ps);
 swap(lhs.i, rhs.i);
 std::cout << "call swap(HasPtr& lhs, HasPtr& rhs)" << std::endl;
}
