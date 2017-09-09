#include <iostream>

using namespace std;

//�����������(����һ��Ԥ�ȶ���õĽӿڱ��)

//����� ....ģ��Ļ���
//virtual class
class Figure {
public:
	//�Ķ�һ��ͳһ�Ľ���(�ӿ�),������ʹ��,���������ȥʵ��
	virtual void getArea() = 0 ; //���麯��
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
	base->getArea(); //�ᷢ����̬
}

void main01()
{
	//Figure f; //�����಻�ܱ�ʵ����
	Figure *base = NULL; //�����಻�ܱ�ʵ����

	Circle c1(10, 20);
	Tri t1(20, 30);
	Square s1(50, 60);

	//�����������(����һ��Ԥ�ȶ���õĽӿڱ��)

	objplay(&c1);
	objplay(&t1);
	objplay(&s1);

	//c1.getArea();
}

int main()
{
	main01();
}
