#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

class  Name {
public:
	Name(const char *myp)
	{
		cout << "constructor." << endl;
		m_len = strlen(myp);
		m_p =(char *) malloc(m_len + 1); //
		strcpy(m_p, myp);
	}
	//Name obj2 = obj1;
	//解决方案: 手工的编写拷贝构造函数 使用深copy
	Name(const Name &obj1)
	{
		cout << "deep copy constructor." << endl;
		m_len = obj1.m_len;
		m_p = (char *)malloc(m_len + 1);
		strcpy(m_p, obj1.m_p);
	}
	~Name()
	{
		cout << "deconstructor." << endl;
		if (m_p != NULL)
		{
			free(m_p);
			m_p = NULL;
			m_len = 0;
		}
	}
protected:
private:
	char *m_p ;
	int m_len; 
};

//coredump while deconstruct
void main01()
{
	Name obj1("abcdefg");
	//default copy constructor provided by compiler, shallow copy
	Name obj2 = obj1;
	//Name obj3("obj3");
	// equal operator provided by compiler, meaning shallow copy.
	//obj3 = obj1;
}

int main()
{
	main01();
}
