#include <iostream>
#include <list>
#include <numeric>
#include <algorithm>

using namespace std;

typedef list<int> LISTINT;
typedef list<int> LISTCHAR;

int main()
{
 LISTINT listOne;
 LISTINT::iterator i;

 listOne.push_front(2);
 listOne.push_front(1);
 
 listOne.push_back(3);
 listOne.push_back(4);

 for (i = listOne.begin(); i != listOne.end(); i++)
  cout << *i << " ";
 cout << endl;

 LISTINT::reverse_iterator ir;
 for (ir = listOne.rbegin(); ir != listOne.rend(); ir++)
  cout << *ir << " ";
 cout << endl;

 int result = accumulate(listOne.begin(), listOne.end(), 0);
 cout << result << endl;

 LISTCHAR listChar;
 LISTCHAR::iterator j;

 listChar.push_front('B');
 listChar.push_front('A');
 
 listChar.push_back('C');
 listChar.push_back('D');

 for (j = listChar.begin(); j != listChar.end(); j++)
  cout << (char)*j << " ";
 cout << endl;

 LISTCHAR::reverse_iterator jr;
 for (jr = listChar.rbegin(); jr != listChar.rend(); jr++)
  cout << (char)*jr << " ";
 cout << endl;

 j = max_element(listChar.begin(), listChar.end());
 cout << (char)*j << endl;
}
