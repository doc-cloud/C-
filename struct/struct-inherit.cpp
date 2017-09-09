#include <iostream>

using namespace std;

enum BREED {GOLDEN, CAIRN, DANDIE, SHETLAND, DOBERMAN, LAB};

struct Mammal {
public:
 Mammal(): itsAge(2), itsWeight(5) {}
 ~Mammal() {}
 int GetAge() const {return itsAge;}
 void SetAge(int age) {itsAge = age;}
 int GetWeight() const {return itsWeight;}
 void SetWeight(int age) {itsWeight = age;}
 void Speak() const {cout << "\n Mammal sound!";}
protected:
 int itsAge;
 int itsWeight;
};

struct Dog: public Mammal {
public:
 Dog(): itsBreed(GOLDEN){}
 ~Dog() {}
 BREED GetBreed() const {return itsBreed;}
 void SetBreed(BREED breed) {itsBreed = breed;}
 void WagTail() const {cout << "Tail wagging ...\n";}
private:
 BREED itsBreed;
};

int
main()
{
 Dog fido;
 fido.Speak();
 fido.WagTail();
 cout << "Fido is " << fido.GetAge() << "years old\n";
 return 0;
}
