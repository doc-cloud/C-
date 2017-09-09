#include "MyString.h"
#include <string.h>
#include <stdio.h>

ostream & operator << (ostream &out, MyString &s)
{
	out << s.m_p;
	return out;
}

istream & operator >> (istream &in, MyString &s)
{
	cin >> s.m_p;
	return in;
}

MyString::MyString(int len)
{
	cout << "constructor with int" << endl;
	if (len == 0) {
		m_len = 0;
		m_p = new char[m_len + 1];
		strcpy(m_p, "");
	} else {
		m_len = len;
		m_p = new char[m_len + 1];
		memset(m_p, 0, m_len);
	}
}

MyString::MyString(const char *p)
{
	cout << "constructor with const char *" << endl;
	if (p == NULL) {
		m_len = 0;
		m_p = new char[m_len + 1];
		strcpy(m_p, "");
	} else {
		m_len = strlen(p);
		m_p = new char[m_len + 1];
		strcpy(m_p, p);
	}
}

//拷贝构造函数
//MyString s3 = s2;
MyString::MyString(const MyString& s)
{
	cout << "constructor with const MyString &" << endl;
	m_len = s.m_len;
	m_p = new char[m_len + 1];

	strcpy(m_p, s.m_p);
}

MyString::~MyString()
{
	if (m_p != NULL) {
		delete [] m_p;
		m_p = NULL;
		m_len = 0;
	}
}

//// s4 = "s2222";
MyString & MyString::operator = (const char *p)
{
	//1 旧内存释放掉
	if (m_p != NULL) {
		delete [] m_p;
		m_len = 0;
	}
	//2 根据p分配内存
	
	if (p == NULL) {
		m_len = 0;
		m_p = new char[m_len + 1];
		strcpy(m_p, "");
	} else {
		m_len = strlen(p);
		m_p = new char[m_len + 1];
		strcpy(m_p, p);
	}
	return *this;
}

// s4 = s2;
MyString & MyString::operator = (const MyString &s)
{
	//1 旧内存释放掉
	if (m_p != NULL) {
		delete [] m_p;
		m_len = 0;
	}
	//2 根据s分配内存
	m_len = s.m_len;
	m_p = new char[m_len + 1];
	strcpy(m_p, s.m_p);

	return *this;
}

char & MyString::operator [] (int index)
{
	return m_p[index];
}

//if (s2 == "s222222")
bool MyString::operator == (const char *p) const
{
	return p == NULL ? m_len == 0 : (m_len == strlen(p) ? !strcmp(m_p, p) : false);
}

bool MyString::operator != (const char *p) const
{
	return !(*this == p);
}

bool MyString::operator == (const MyString &s) const
{
	return m_len == s.m_len ? !strcmp(m_p, s.m_p) : false;
}

bool MyString::operator != (const MyString& s) const
{
	return !(*this == s);
}

//if (s3 < "bbbb")
int MyString::operator < (const char *p)
{
	return strcmp(this->m_p, p);
}

int MyString::operator > (const char *p)
{
	return strcmp(p, this->m_p);
}

int MyString::operator < (const MyString &s)
{
	return strcmp(this->m_p, s.m_p);
}

int MyString::operator > (const MyString &s)
{
	return strcmp(s.m_p, m_p);
}
