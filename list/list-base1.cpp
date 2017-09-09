#include <iostream>
#include <list>

using namespace std;

typedef list<int> INTLIST;

void put_list(INTLIST list)
{
 INTLIST::iterator p;
 
 for (p = list.begin(); p != list.end(); p++)
  cout << *p << " ";
 
 cout << endl;
}

int main(void)
{
 INTLIST list1;
 INTLIST list2(10, 6);
 //list3对象最初有3个值为6的元素
 INTLIST list3(list2.begin(),--list2.end());
 INTLIST::iterator i;
 
 put_list(list1);
 put_list(list2);
 put_list(list3); 

 list1.push_back(2);
 list1.push_back(4);
 put_list(list1);

 list1.push_front(5);
 list1.push_front(7);
 put_list(list1);

 list1.insert(++list1.begin(), 3, 9);
 put_list(list1);

 cout << list1.front() << endl;
 cout << list1.back() << endl;

 list1.pop_front();
 list1.pop_back();
 put_list(list1);

 list1.erase(++list1.begin());
 put_list(list1);

 list2.assign(8, 1);
 put_list(list2);

 cout << list1.max_size() << endl;
 cout << list1.size() << endl;
 cout << list1.empty() << endl;

 put_list(list1);
 put_list(list3);

 cout << (list1 < list3) << endl;

 list1.sort();
 put_list(list1);

 list1.splice(++list1.begin(), list3);
 put_list(list1);
 put_list(list3);
}
