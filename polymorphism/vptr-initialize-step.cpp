#include <iostream>
using namespace std;

//构造函数中调用虚函数能发生多态吗?
class Parent {
public:
	Parent(int a=0)
	{
		this->a = a;
		print();
	}
	virtual void print() {cout<<"I am father"<<endl;}
private:
	int a;
};

class Child : public Parent {
public:
	Child(int a = 0, int b=0):Parent(a)
	{
		this->b = b;
		print();
	}
	virtual void print() {cout<<"I am child"<<endl;}
private:
	int b;
};

void HowToPlay(Parent *base)
{
	base->print(); //有多态发生  //2 动手脚  
}

int main()
{
	Child  c1; //定义一个子类对象 ,在这个过程中,在父类构造函数中调用虚函数print 能发生多态吗?
	//c1.print();
}
