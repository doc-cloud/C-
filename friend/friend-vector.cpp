#include <iostream>
#include <cstdlib>

using namespace std;

class vector {
public:
	vector(int size = 1);
	~vector();
	int & operator [] (int i);
	friend ostream & operator << (ostream & out, vector & any);
	friend istream & operator >> (istream & in, vector & any);
private:
	int *v;
	int len;
};

vector::vector(int size)
{
	if (size < 0 || size > 100) {
		cout << "error size" << endl;
		abort();
	}
	v = new int [size];
	len = size;
}

vector::~vector()
{
	delete [] v;
	len = 0;
}

int & vector::operator [] (int i)
{
	if (i >= 0 && i < len)
		return v[i];
	cout << i << " outside" << endl;
	abort();
}

ostream & operator << (ostream & out, vector & any)
{
	for (int i = 0; i < any.len; i++)
		out << any.v[i] << " ";
	out << endl;
	return out;
}

istream & operator >> (istream & in, vector & any)
{
	for (int i = 0; i < any.len; i++)
		in >> any.v[i];
	return in;
}

int main()
{
	int k;
	cin >> k;
	vector A(k);
	cin >> A;
	cout << A;
}
