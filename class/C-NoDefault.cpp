#include <vector>

using namespace std;

class NoDefault {
public:
 NoDefault(int a) {}
private:
// int a, b;
};

class C {
public:
 C(): nd(0) {}
private:
 NoDefault nd;
};

int
main()
{
 C c;
 vector<C> vec(10);
}
