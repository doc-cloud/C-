#include <iostream>

using namespace std;

class A {
 int m_nA;
};

class B {
 int m_nB;
};

class C: public A, public B {
 int m_nC;
};

int
main()
{
 C *pC = new C;
 B *pB = dynamic_cast<B *>(pC);
 A *pA = dynamic_cast<A *>(pC);

 cout << pC << endl;
 cout << pB << endl;
 cout << (C *)pB << endl;

 if (pC == pB) cout << "equal" << endl;
 else cout << "not equal" << endl;

 if (int(pC) == int(pB)) cout << "equal" << endl;
 else cout << "not equal" << endl;

 if (int(pC) == int((C *)pB)) cout << "equal" << endl;
 else cout << "not equal" << endl;
}
