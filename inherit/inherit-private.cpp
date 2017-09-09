#include <iostream>

using namespace std;

class Animal {
public:
 Animal() {}
 void eat() {cout << "eat\n";}
};

class Giraffe: private Animal {
public:
 Giraffe() {}
 void StrechNeck()
 {
  cout << "strecj neck\n";
 }
 void take()
 {
  eat();
 }
};

class Cat: public Animal {
public:
 Cat() {}
 void Meaw() {cout << "meaw\n";}
};

void Func(Animal & an)
{
 an.eat();
}

int
main()
{
 Cat dao;
 Giraffe gir;
 Func(dao);
 gir.StrechNeck();
 gir.take();
 //Func(gir);
}
