#include <iostream>

using namespace std;

class complex {
public:
	complex()
	{
		real = img = 0;
	}
	complex(double r, double i)
	{
		real = r;
		img = i;
	}
	complex operator + (const complex &c);
	complex operator - (const complex &c);
	complex operator * (const complex &c);
	complex operator / (const complex &c);
	friend void print(const complex &c);
private:
	double real, img;
};

inline complex complex::operator + (const complex &c)
{
	return complex(real + c.real, img + c.img);
}

inline complex complex::operator - (const complex &c)
{
	return complex(real - c.real, img - c.img);
}

inline complex complex::operator * (const complex &c)
{
	return complex(real * c.real - img * c.img, real * c.img + c.real * img);
}

inline complex complex::operator / (const complex &c)
{
	return complex(
		(real * c.real + img * c.img) / (c.real * c.real + c.img * c.img),
		(img * c.real - real * c.img) / (c.real * c.real + c.img * c.img)
	);
}

void print(const complex &c)
{
	cout << c.real << (c.img < 0 ? "" : "+") << c.img << 'i' << endl;
}

int main()
{
	complex c1(2.0, 3.0), c2(4.0, -2.0), c3;

	c3 = c1 + c2;
	cout << "c1 + c2 = ";
	print(c3);

	c3 = c1 - c2;
	cout << "c1 - c2 = ";
	print(c3);

	c3 = c1 * c2;
	cout << "c1 * c2 = ";
	print(c3);

	c3 = c1 / c2;
	cout << "c1 / c2 = ";
	print(c3);

	c3 = (c1 + c2) * (c1 - c2) * c2 / c1;
	cout << "(c1 + c2) * (c1 - c2) * c2 / c1 = ";
	print(c3);
}
