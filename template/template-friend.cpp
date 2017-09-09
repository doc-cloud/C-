#include <iostream>

using namespace std;

template <class T>

class Test;

template <class T>
ostream & operator << (ostream & out, const Test<T> & obj);

template <class T>
class Test {
private:
 int num;
public:
 Test(int n = 0) {num = n;}
 friend ostream & operator << <> (ostream & out, const Test<T> & obj);
};

template <class T>
ostream & operator << (ostream & out, const Test <T> &obj)
{
 out << obj.num;
 return out;
}

int
main()
{
 Test<int> t(2);
 cout << t;
}
