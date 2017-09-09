#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

class  Name
{
public:
	Name(const char *myp)
	{
		m_len = strlen(myp);
		m_p =(char *) malloc(m_len + 1);
		strcpy(m_p, myp);
	}

	//Name obj2 = obj1;
	//disposal, write copy construct by ourself, use heavy level copy
	Name(const Name& obj1)
	{
		m_len = obj1.m_len;
		m_p = (char *)malloc(m_len + 1);
		strcpy(m_p, obj1.m_p);
	}

	~Name()
	{
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

//coredump when destruct
void objplaymain()
{
	Name obj1("abcdefg");
	//default is light level copy
	//Name obj2 = obj1;
	Name obj3("obj3");

	//default = symbol is light level copy as well
	obj3 = obj1;
}

int main()
{
	objplaymain();
	return 0;
}
