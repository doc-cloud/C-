#include <iostream>
using namespace std;

//����:
//��̬���ø���ָ��ָ��������� �� ���ಽ��++,��������ͬ�ĸ���
class Parent {
public:
	Parent(int a=0) {this->a = a;}
	virtual void print() {cout<<"I am father"<<endl;}
private:
	int a;
};

//�ɹ� ,һ��żȻ�ĳɹ� ,��Ȼ��ʧ�ܸ�����
class Child : public Parent {
public:
	/*
	Child(int a = 0, int b=0):Parent(a)
	{
		this->b = b;
		print();
	}
	*/
	Child(int b = 0):Parent(0)
	{
		//this->b = b;
	}
	virtual void print() {cout<<"I am child"<<endl;}
private:
	//int b, c;
};

void HowToPlay(Parent *base)
{
	base->print(); //�ж�̬����  //2 ���ֽ�  
}

int main()
{
	Child  c1; //����һ��������� ,�����������,�ڸ��๹�캯���е����麯��print �ܷ�����̬��?
	c1.print();

	Parent *pP = NULL;
	Child  *pC = NULL;

	Child  array[] = {Child(1), Child(2), Child(3)};
	pP = array;
	pC = array;

	pP->print();
	pC->print(); //��̬����

	pP++;
	pC++;
	pP->print();
	pC->print(); //��̬����

	pP++;
	pC++;
	pP->print();
	pC->print(); //��̬����

	return 0;
}
