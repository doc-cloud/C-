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

//���������ķ���
//1 ��ĳ��� ��Ա�����ͳ�Ա����
//2 ʵ���� ��Ķ���
//3 �����
	//������̼ӹ����� һ��һ���ĺ���
	//�������ӹ�����:һ��һ������
//4 main���ɲ���

//˼��1:��ĵ��� ִ�й��̷���==>����벻��һ��һ��ָ��
//����һ����������,(�̶���С�ڴ��ı���); ����һ����,��һ������ĸ���,�����������ڴ�
//���������Ͷ��������ʱ��,�Ż�����ڴ�
//˼��2:��ש: c++����������δ��� �������,������ĳ�Ա������;����һ��:���������c1 c2 c3 ������getS,��ש.....

int main()
{
	// main01();
	// main02();
	main03();
}
