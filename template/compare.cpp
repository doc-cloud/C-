#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

template<typename T>
int compare(const T & lhs, const T & rhs)
{
 if (lhs < rhs) return -1;
 if (lhs > rhs) return 1;
 return 0;
}

int main()
{
     // Test compare function
     cout << compare(1, 0) << endl;
     vector<int> vec1{ 1, 2, 3 }, vec2{ 4, 5, 6 };
         cout << compare(vec1, vec2) << endl;

	     return 0;
}
