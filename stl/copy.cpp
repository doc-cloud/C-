#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

using namespace std;

int main01()
{
 int myints[] = {10, 20, 30, 40, 50, 60, 70};
 vector<int> myvector(7);
 vector<int>::iterator it;
 
 //myvector.resize(7);
 
 copy(myints, myints + 7, myvector.begin());
 
 for (it = myvector.begin(); it != myvector.end(); it++)
  cout << " " << *it;
 cout << endl;
 
 copy(myints + 1, myints + 7, myints);
 
 for (size_t i = 0; i < 7; i++)
  cout << " " << myints[i];
 cout << endl;
}

int main()
{
 typedef vector<int> IntVector;
 typedef istream_iterator<int> IstreamItr;
 typedef ostream_iterator<int> OstreamItr;
 typedef back_insert_iterator<IntVector> BackInsItr;
 
 IntVector myvector;
 
 copy(IstreamItr(cin), IstreamItr(), BackInsItr(myvector));
 
 copy(myvector.begin(), myvector.end(), OstreamItr(cout, " "));
 cout << endl;
}