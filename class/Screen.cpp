#include "Screen.h"
#include <iostream>

using namespace std;

int
main()
{
 Screen sc(5, 5, 'X');
 sc.move(4, 0).set('#').display(cout);
 cout << endl;
 sc.display(cout);
 cout << endl;
}
