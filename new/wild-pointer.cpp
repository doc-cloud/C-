#include <iostream>

typedef unsigned short int USHORT;

using namespace std;

int
main()
{
 USHORT *pInt = new USHORT;
 *pInt = 10;
 cout << *pInt << endl;
 delete pInt;
 //pInt = 0;
 long *pLong = new long;
 *pLong = 90000;
 cout << *pLong << endl;
 *pInt = 20;
 cout << *pInt << endl;
 cout << *pLong << endl;
 delete pLong;
}
