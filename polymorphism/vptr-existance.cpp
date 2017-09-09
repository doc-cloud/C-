#include <iostream>
#include <cstdio>

using namespace std;

class Parent1 {
public:
	Parent1(int a=0) {this->a = a;}
	void print() {cout<<"I am father"<<endl;}
private:
	int a;
};

class Parent2 {
public:
	Parent2(int a=0) {this->a = a;}
	virtual void print() {cout<<"I am father"<<endl;}
private:
	int a;
};

int main()
{
	printf("sizeof(Parent):%ld sizeof(Parent2):%ld \n", sizeof(Parent1), sizeof(Parent2));
}
