#include "iostream"

using namespace std;

//求圆形的面积
//封装有2层含义
//1 把属性和方法进行封装 
//2 对属性和方法进行访问控制
//3 类的内部和类的外部
//4 类的访问控制关键字

//public: decorate member variable and function, access in class internal or external
//private: decorate member variable and function, access in class internal
//protected: decorate member variable and function, access in class internal, use in inherit
class MyCircle {
public:
	double m_r;
	double m_s;
	double getR() {return m_r;}
	void setR(double r) {m_r = r;}

	double getS()
	{
		m_s = 3.14*m_r*m_r;
		return  m_s;
	}
protected:
private:
};

//类的封装的威力
//类封装的成员变量和成员函数  //可以调用类的成员函数
void printCircle01(MyCircle *pC)
{
	cout<<"r"<<pC->getR()<<endl;
	cout<<"s"<<pC->getS()<<endl;
}

void printCircle02(MyCircle &myc)
{
	cout<<myc.getS()<<endl;
}

void printCircle03(MyCircle myc)
{
}

void main01()
{
	MyCircle c1, c2;
	c1.setR(10);
	cout<<"c1 s: "<<c1.getS()<<endl;

	c1.setR(11);
	printCircle01(&c1);

	c2.setR(20);
	printCircle01(&c2);

	//引用
	printCircle02(c2);
}

class MyAdvCircle {
private:
	double m_r2; //没有权限修饰的成员变量 函数 是 默认是私有属性
	double m_r; //属性 成员变量
	double m_s;  //相当于你的银行卡密码
public:
	double getR()
	{
		return m_r;
	}
	void setR(double r)
	{
		m_r = r;
	}
	double getS()
	{
		m_s = 3.14*m_r*m_r;
		return  m_s;
	}
};

void main02()
{
	MyAdvCircle c1, c2;
	//c1.m_r = 10; 
	c1.setR(10);
}

struct AAA {
	//struct default public, class default private
	int a;
public:
protected:
private:
};

void main03()
{
	AAA a1;
	a1.a = 11;
}

int main()
{
	//main01();
	//main02();
	main03();
}
