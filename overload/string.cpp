#include <iostream>
#include <cstring>

using namespace std;

class String {
	friend ostream & operator << (ostream &out, String &str);
	friend istream & operator >> (istream &in, String &str);
public:
	String(int len = 0);
	String(const char *ptr);
	String(const String & str);
	~String();

	String & operator = (const char *ptr);
	String & operator = (const String & str);
	char & operator [] (int index);

	bool operator == (const char *ptr) const;
	bool operator == (const String &str) const;
	bool operator != (const char *ptr) const;
	bool operator != (const String &str) const;

	int operator < (const char *ptr);
	int operator > (const char *ptr);
	int operator < (const String &str);
	int operator > (const String &str);

	char * c_str()
	{
		return ptr;
	}
private:
	int len;
	char *ptr;
};

String::String(int len)
{
	this->len = len;
	ptr = new char [this->len + 1];

	if (this->len == 0)
		strcpy(ptr, "");
	else
		memset(ptr, '\0', this->len);
}

String::String(const char *ptr)
{
	if (ptr == NULL) {
		len = 0;
		this->ptr = new char [len + 1];
		strcpy(this->ptr, "");
	} else {
		len = strlen(ptr);
		this->ptr = new char [len + 1];
		strcpy(this->ptr, ptr);
	}
}

String::String(const String & str)
{
	len = str.len;
	ptr = new char [len + 1];
	strcpy(ptr, str.ptr);
}

String::~String()
{
	if (ptr) {
		delete [] ptr;
		ptr = NULL;
		len = 0;
	}
}

bool String::operator == (const char *ptr) const
{
	if (ptr == NULL) {
		return len == 0;
	} else {
		if (len == strlen(ptr))
			return !strcmp(this->ptr, ptr);
		else
			return false;
	}
}

bool String::operator == (const String &str) const
{
	return len == str.len ? !strcmp(ptr, str.ptr) : false;
}

bool String::operator != (const char *ptr) const
{
	return !this->operator == (ptr);
}

bool String::operator != (const String &str) const
{
	return !this->operator == (str);
}

int String::operator < (const char *ptr)
{
	return strcmp(ptr, this->ptr);
}

int String::operator > (const char *ptr)
{
	return strcmp(this->ptr, ptr);
}

int String::operator < (const String &str)
{
	return strcmp(str.ptr, ptr);
}

int String::operator > (const String &str)
{
	return strcmp(ptr, str.ptr);
}

String & String::operator = (const char *ptr)
{
	if (this->ptr) {
		delete [] this->ptr;
		len = 0;
	}

	if (ptr == NULL) {
		len = 0;
		this->ptr = new char [len + 1];
		strcpy(this->ptr, "");
	} else {
		len = strlen(ptr);
		this->ptr = new char [len + 1];
		strcpy(this->ptr, ptr);
	}

	return *this;
}

String & String::operator = (const String & str)
{
	if (ptr) {
		delete [] ptr;
		len = 0;
	}
	len = str.len;
	ptr = new char [len + 1];
	strcpy(ptr, str.ptr);
	return *this;
}

char & String::operator [] (int index)
{
	return ptr[index];
}

ostream & operator << (ostream &out, String &str)
{
	out << str.ptr;
	return out;
}

istream & operator >> (istream &in, String &str)
{
	in >> str.ptr;
	return in;
}

void main01()
{
	String s1;
	String s2("s2");
	String s4("s444444");
	s4 = s2;
	s4 = "s22222";
	s4[1] = '4';
	cout << s4 << endl;
}

void main02()
{
	String s1;
	String s2("str2");
	String s3 = s2;

	cout << (s2 == "aa" ? "==" : "!=") << endl;
	cout << (s2 == s3 ? "==" : "!=") << endl;

	cout << (s2 != "aa" ? "!=" : "==") << endl;
	cout << (s2 != s3 ? "!=" : "==") << endl;
}

void main03()
{
	String s1;
	String s2("str2");
	String s3 = s2;
	s3 = "cccc";
	
	cout << "s3 " << ((s3 < "bbbb") < 0 ? "<" : ">") << " bbbb" << endl;

	String s4 = "aaaaffff";
	strcpy(s4.c_str(), "aa111");
	cout << s4 << endl;
}

void main04()
{
	String s1(128);
	cin >> s1;
	cout << s1;
}

int main()
{
	main01();
	//main02();
	//main03();
	//main04();
}
