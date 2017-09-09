#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main()
{
 vector<int> v = { 1, 2, 3, 4 };
 cout << accumulate(v.cbegin(), v.cend(), 0) << endl;
 vector<double> dv = { 1.1, 2.2, 3.3, 4.4 };
 cout << accumulate(dv.cbegin(), dv.cend(), 0.0) << endl;
}
