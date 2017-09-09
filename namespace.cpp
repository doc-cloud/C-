#include <iostream>

using namespace std;

//there is no namespace reference in iostream, user should write "namespace std;"
//it will not included automatically
//if you do not want to write "using namespace std", you should refer std explicitly.
void main01()
{
	std::cout << "namespace test" << std::endl;
}

namespace namespace_A {
	int a = 10;
}

namespace namespace_B {
	int a = 20;
	namespace namespace_C {
		struct Teacher {
			char name[32];
			int age;
		};
	}
}

int main02()
{
	using namespace namespace_A;
	using namespace namespace_B;
	cout << namespace_A::a << endl;
	cout << namespace_B::a << endl;

	namespace_B::namespace_C::Teacher t1;
	t1.age = 32;

	// using namespace_B::namespace_C::Teacher;
	// Teacher t2;
	// t2.age = 32;
}

int main()
{
	// main01();
	main02();
}
