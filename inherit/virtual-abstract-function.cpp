#include <iostream>

using namespace std;

//面向抽象类编程(面向一套预先定义好的接口编程)

//解耦合 ....模块的划分
//virtual class
class Figure {
public:
	//阅读一个统一的界面(接口),让子类使用,让子类必须去实现
	virtual void getArea() = 0 ; //纯虚函数
};

class Circle : public Figure {
public:
	Circle(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void getArea() {cout<<"circle area : "<<3.14*a*a<<endl;}
private:
	int a;
	int b;
};

class Tri : public Figure {
public:
	Tri(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void getArea() {cout<<"triangle area : "<<a*b/2<<endl;}
private:
	int a;
	int b;
};

class Square : public Figure {
public:
	Square(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void getArea() {cout<<"square area : "<<a*b<<endl;}
private:
	int a;
	int b;
};

#if 0

class Figure {
	friend class Circle;
	friend class Tri;
	friend class Square;
public:
	virtual void getArea() = 0;
private:
	int a;
	int b;
};

class Circle : public Figure {
public:
	Circle(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void getArea() {cout << 3.14 * a * a << endl;}
};

class Tri : public Figure {
public:
	Tri(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void getArea() {cout << a * b / 2 << endl;}
};

class Square : public Figure {
public:
	Square(int a, int b)
	{
		this->a = a;
		this->b = b;
	}
	virtual void getArea() {cout << a * b << endl;}
};

#endif

void objplay(Figure *base)
{
	base->getArea(); //会发生多态
}

void main01()
{
	//Figure f; //抽象类不能被实例化
	Figure *base = NULL; //抽象类不能被实例化

	Circle c1(10, 20);
	Tri t1(20, 30);
	Square s1(50, 60);

	//面向抽象类编程(面向一套预先定义好的接口编程)

	objplay(&c1);
	objplay(&t1);
	objplay(&s1);

	//c1.getArea();
}

int main()
{
	main01();
}
