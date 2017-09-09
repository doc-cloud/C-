#include "iostream"

/* standard namespace */
using namespace std;

int main01()
{
	cout << "hello..." << endl;
}

/* procedure-oriented. */
int main02()
{
	double	r = 0;
	double	s = 0;

	cout << "input radius of circle : ";
	cin >> r;
	cout << "r = " << r << endl;
	s = 3.14 * r * r;
	cout << "square = " << s << endl;
	return 0;
}

struct Circle01 {
	double	m_s;
	double	m_r;
};

class MyCircle {
public:
	double m_r;
	double m_s;
	void setR(double r)
	{
		m_r = r;
	}
	double getR()
	{
		return m_r;
	}
	double getS()
	{
		return m_s = 3.14 * m_r * m_r;
	}
};

int main03()
{
	MyCircle c1;
	double r;
	cin >> r;
	c1.setR(r);
	cout << c1.getR() << endl;
	cout << c1.getS() << endl;
}

//用面向对象的方法
//1 类的抽象 成员变量和成员函数
//2 实例化 类的对象
//3 求面积
	//面向过程加工的是 一个一个的函数
	//面向对象加工的是:一个一个的类
//4 main集成测试

//思考1:类的调用 执行过程分析==>类代码不是一步一步指向
//类是一个数据类型,(固定大小内存块的别名); 定义一个类,是一个抽象的概念,不会给你分配内存
//用数据类型定义变量的时候,才会分配内存
//思考2:抛砖: c++编译器是如何处理 多个对象,调用类的成员函数的;具体一点:如何区分是c1 c2 c3 调用了getS,抛砖.....

int main()
{
	// main01();
	// main02();
	main03();
}
