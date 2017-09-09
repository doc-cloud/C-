#include <iostream>
#include <cstdio>

using namespace std;

//多态的思想
//面向对象3大概念
//封装: 突破c函数的概念....用类做函数参数的时候,可以使用对象的属性 和对象的方法 
//继承: A B 代码复用
//多态 : 可以使用未来...

//多态很重要
//实现多态的三个条件
//C语言 间接赋值 是指针存在的最大意义
//是c语言的特有的现象 (1 定义两个变量  2 建立关联  3 *p在被调用函数中去间接的修改实参的值)

//实现多态的三个条件
//1 要有继承 
//2 要有虚函数重写
//3 用父类指针(父类引用)指向子类对象....
class HeroFighter {
public:
	virtual int power() {return 10;}
};

class AdvFighter : public HeroFighter {
public:
	virtual int power() {return 15;}
};

class EnemyFighter {
public:
	int attack() {return 12;}
};

void war(HeroFighter *hf, EnemyFighter *ef)
{
	cout << (hf->power() < ef->attack()) << endl;
}

void main01()
{
	HeroFighter hf;
	AdvFighter advf;
	EnemyFighter ef;

	cout << (hf.power() < ef.attack()) << endl;
	cout << (advf.power() < ef.attack()) << endl;
}

void main02()
{
	HeroFighter hf;
	AdvFighter advf;
	EnemyFighter ef;

	war(&hf, &ef);
	war(&advf, &ef);
}

int main()
{
	main01();
	//main02();
}
