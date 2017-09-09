#include <vector>

using namespace std;

int (*func)(int, int);

int
main()
{
 using pFunc1 = decltype(func) *;
 typedef decltype(func) * pFunc2;
 using pFunc3 = int (*)(int, int);
 using pFunc4 = int (int, int);
 typedef int (*pFunc5)(int, int);
 using pFunc6 = decltype(func);
 
 vector<pFunc1> vec1;
 vector<pFunc2> vec2;
 vector<pFunc3> vec3;
 vector<pFunc4 *> * vec4;
 vector<pFunc5> vec5;
 vector<pFunc6 *> * vec6;
}
