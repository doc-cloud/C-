//��������������
//1 �о��������� 
//2 �о����캯�������������ĵ���˳��

//�ܽ� ����������ĵ���˳��
#include "iostream"
#include <cstdio>

using namespace std;

class ABCD  {
public:
	ABCD(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
		printf("ABCD() construct, a:%d,b:%d,c:%d  \n", this->a, this->b, this->c);
	}
	~ABCD()
	{
		printf("~ABCD() deconstruct,a:%d,b:%d,c:%d  \n", this->a, this->b, this->c);
	}
	int getA() 
	{
		return this->a;
	}
protected:
private:
	int a;
	int b;
	int c;
};

class MyE {
public:
	MyE():abcd1(1,2,3),abcd2(4,5,6),m(100)
	{
		cout<<"MyD()"<<endl;
	}
	~MyE()
	{
		cout<<"~MyD()"<<endl;
	}
	MyE(const MyE & obj):abcd1(7,8,9),abcd2(10,11,12),m(100)
	{
		printf("MyD(const MyD & obj)\n");
	}
protected:
public:
	ABCD abcd1; //c++��������֪����ι���abc1
	ABCD abcd2;
	const int m;
};

void doThing(MyE mye1)
{
	printf("doThing() mye1.abc1.a:%d \n", mye1.abcd1.getA()); 
}

void main01()
{
	MyE myE;
	doThing(myE);
}

void main02()
{
	//ABCD(400, 500, 600); //��ʱ�������������  

	ABCD abcd = ABCD(100, 200, 300);
	//��ֱ�ӵ��ù��캯���أ�
	//����ù��캯����abc��������ٸ��ƣ�������
	//�ڹ��캯�������������һ�����캯��������ʲô�����
	cout << "fuck you" << endl;
}

int main()
{
	//main01();
	main02();
}
