#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class Name {
public:
	Name(const char *myp)
	{
		cout << "constructor" << endl;
		m_len = strlen(myp);
		m_p =(char *) malloc(m_len + 1);
		strcpy(m_p, myp);
	}
	//Name obj2 = obj1;
	//heavy level copy
	Name(const Name& obj1)
	{
		cout << "copy constructor" << endl;
		m_len = obj1.m_len;
		m_p = (char *)malloc(m_len + 1);
		strcpy(m_p, obj1.m_p);
	}
	//equal assignment is light level copy as well
	//obj3 = obj1;
	//obj3.operator=(obj1)
	//void operator = (Name &obj1)
	Name& operator=(Name &obj1)
	{
		//release old memory
		if (this->m_p != NULL) {
			delete[] m_p;
			m_len = 0;
		}
		//allocate memory via obj1
		this->m_len = obj1.m_len;
		this->m_p = new char [m_len + 1];
		
		//assign to obj1
		strcpy(m_p, obj1.m_p);
		//return ;
		return *this;
	}
	~Name()
	{
		cout << "deconstructor" << endl;
		if (m_p != NULL) {
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

//when construct, coredump
void objplaymain()
{
	Name obj1("abcdefg");
	Name obj2 = obj1;
	Name obj3("obj3");

	obj3 = obj1;
	//obj3.operator=(obj1);
	//operato=(Name &obj1)

	obj1 = obj2 = obj3;
	//obj2.operator=(obj3);
	//obj1 = void;
}

int main()
{
	objplaymain();
}
