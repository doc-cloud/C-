#include <iostream>
#include <random>
#include<string>

using namespace std;

unsigned
random_gen();

unsigned
random_gen(unsigned seed);

unsigned
random_gen(unsigned seed, unsigned min, unsigned max);

int
main()
{
 string temp;
 while (cin >> temp)
  cout << hex << random_gen(19, 1, 10) << endl;
}

unsigned
random_gen()
{
 static default_random_engine e;
 uniform_int_distribution<unsigned> ud;
 return ud(e);
}

unsigned
random_gen(unsigned seed)
{
 static default_random_engine e(seed);
 uniform_int_distribution<unsigned> ud;
 return ud(e);
}

unsigned
random_gen(unsigned seed, unsigned min, unsigned max)
{
 static default_random_engine e(seed);
 uniform_int_distribution<unsigned> ud(min, max);
 return ud(e);
}
