#include <iostream>

using namespace std;

class Shape {
public:
 Shape() {}
 ~Shape() {}
 //virtual void Draw() = 0;
 virtual void Draw() {};
};

int
main()
{
 Shape s1;
}
