#include <iostream>
using namespace std;

class printData {
public:
	void print(int i)
	{
		cout << "Printing int : " << i << endl;
	}
	void print(double i)
	{
		cout << "Printing float : " << i << endl;
	}
	void print(string i)
	{
		cout << "Printing string : " << i << endl;
	}
};

int main()
{
	printData pd;
	pd.print(5);
	pd.print(55.234);
	pd.print("fadfadqwqwer");
}
