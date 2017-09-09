#include <iostream>
using namespace std;

class Test4 {
public:
	Test4()
	{
		m_a = 0;
		m_b = 0;
		cout<<"Constructor without parameter"<<endl;
	}
	Test4(int a)
	{
		m_a = a;
		m_b = 0;
		cout<<"Constructor with one parameter"<<endl;
	}
	Test4(int a, int b)
	{
		m_a = a;
		m_b = b;
		cout<<"Constructor with two parameter"<<endl;
	}
	//��ֵ���캯�� (copy���캯��) //
	Test4(const Test4& obj )
	{
		m_b = obj.m_b + 100;
		m_a = obj.m_a + 100;
		cout<<"copy Constructor"<<endl;
	}
	void printT()
	{
		cout<<"normal member function"<<endl;
		cout << m_a << endl << m_b <<endl;
	}
private:
	int m_a;
	int m_b;
};

//1  ��ֵ���캯�� ��1������ȥ��ʼ������һ������  
void main01()
{
	Test4 t1(1, 2);
	Test4 t0(1, 2);

	//��ֵ=���� �᲻����ù��캯��
	//operator=()//��ש
	t0 = t1; //��t1 �� t0��ֵ  ������ �� ��ʼ����������ͬ�ĸ���

	//��1�ֵ��÷���
	Test4 t2 = t1; //��t1����ʼ�� t2 
	t2.printT();
}

//�ڶ��ֵ���ʱ��
void main02()
{
	Test4 t1(1, 2);
	Test4 t0(1, 2);

	Test4 t2(t1);  //��t1���� ��ʼ�� t2���� 
	t2.printT();
}

int main()
{
	main01();
	//main02();
}
