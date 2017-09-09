#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
#include "MyString.h"

//void main01()
//{
//	MyString s1;
//	MyString s2("s2");
//	MyString s2_2 = NULL;
//	MyString s3 = s2;
//	MyString s4 = "s4444444444";
//
//	//测试运算符重载 和 重载[]
//	//=
//
//	s4 = s2;
//	s4 = "s2222";
//	s4[1] = '4';
//	printf("%c", s4[1]);
//
//	cout<<s4 <<endl;
//	//ostream& operator<<(ostream &out, MyString &s)
//	
//	//char& operator[] (int index)
//	//MyString& operator=(const char *p);
//	//MyString& operator=(const MyString &s);
//
//	return ;
//}

void main02()
{
	MyString s1;
	MyString s2("s2");

	MyString s3 = s2;

	cout << (s2 == "aa" ? "==" : "!=") << endl;

	cout << (s3 == s2 ? "==" : "!=") << endl;
}

void main03()
{
	MyString s1;
	MyString s2("s2");

	MyString s3 = s2;
	s3 = "aaa";

	cout << "s3 " << ((s3 < "bbbb") < 0 ? "<" : ">") << " bbbb" << endl;

	MyString s4 = "aaaaffff";
	strcpy(s4.c_str(), "aa111"); //MFC
	cout<<s4<<endl;
}

void main04()
{
	MyString s1(128);
	cout<<"\ninput string:";
	cin>>s1;

	cout<<s1;
}

int main05()
{
	MyString s1(128);
	cout<<"\ninput string";
	cin>>s1;

	cout<<s1<<endl;
	return 0;
}

int main()
{
	//main01();
	//main02();
	main03();
	//main04();
	//main05();
}
