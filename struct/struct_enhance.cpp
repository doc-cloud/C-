#include <iostream>

using namespace std;

//struct �ؼ��� class�ؼ��� ��ɵĹ�����һ����
//���������� ��ש
class c1 {
public:
protected:
private:
};

struct Teacher {
public:
	char name[32];
	int age;
protected:
	int a;
};

int main()
{
	Teacher t1;
	t1.age = 10;
	cout << "t1.age = " << t1.age << endl;
}
