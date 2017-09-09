#include <iostream>
#include <bitset>
#include <vector>

using namespace std;

int main()
{
 vector<int> v = {1, 2, 3, 5, 8, 13, 21};
 bitset<32> bset;
 for (auto i : v) bset.set(i);

 bitset<32> bset2;
 for (unsigned i = 0; i != 32; ++i)
  bset2[i] = bset[i];

  std::cout <<bset <<std::endl;
      std::cout <<bset2<<std::endl;
}
