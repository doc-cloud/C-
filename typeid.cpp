#include <iostream>
#include <typeinfo>

using namespace std;

int
main()
{
 int vInt = 10;
 int arr[2] = {10, 20};
 int *p = &vInt;
 int **p2p = &p;
 int *parr[2] = {&vInt, &vInt};
 int (*p2arr)[2] = &arr;

 cout << typeid(vInt).name() << endl;
 cout << typeid(arr).name() << endl;
 cout << typeid(p).name() << endl;
 cout << typeid(p2p).name() << endl;
 cout << typeid(parr).name() << endl;
 cout << typeid(p2arr).name() << endl;
}
