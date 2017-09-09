#include <iostream>
using namespace std;

class Distance {
private:
	int feet;             // 0 到无穷
	int inches;      
public:
	Distance() { feet = 0, inches = 0;}
	Distance(int f, int i) { feet = f, inches = i;}
	friend istream & operator >> (istream &input, Distance &d)
	{
		input >> d.feet >> d.inches;
		return input;
	}
	friend ostream & operator << (ostream &output, Distance &d)
	{
		output <<"feet = " << d.feet <<", inches = " << d.inches << endl;
		return output;
	}
};

int main()
{
	Distance D1(11, 10), D2(-5, 11), D3;
	cout << "Enter the value of object : " << endl;
	cin >> D3;
	cout << D1 << endl;
	cout << D2 << endl;
	cout << D3 << endl;
}
