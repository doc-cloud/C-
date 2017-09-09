#include <iostream>
#include <cmath>

using namespace std;
class Point {
public:
	//Point(void) {x = 0; y = 0;}
	Point(int _x = 0, int _y = 0) {x = _x; y = _y;}
	void x_get(void);
	void y_get(void);
	double distance(Point &p);
private:
	double x, y;
};

void Point::x_get(void)
{
	cout << "input x of circle : ";
	cin >> x;
}

void Point::y_get(void)
{
	cout << "input y of circle : ";
	cin >> y;
}

double Point::distance(Point &p)
{
	return sqrt((x - p.x) * (x - p.x) + (y - p.y) * (y - p.y));
	//return ((x - p.x) ^ 2 + (y - p.y) ^ 2) ^ 0.5;
}

//------------------------------------------------------------------------------

class Circle {
public:
	void r_get(void);
	int isintersect(Circle c);
	Point centre;
private:
	double radius;
};

void Circle::r_get(void)
{
	cout << "input radius of circle : ";
	cin >> radius;
}

int Circle::isintersect(Circle c)
{
	return (
		this->radius + c.radius >= (this->centre).distance(c.centre)
		&& (
			this->radius - c.radius <= (this->centre).distance(c.centre)
			&& c.radius - this->radius <= (this->centre).distance(c.centre)
		)
	);
}

int main()
{
	Point p1(3, 4), p2(12, 5);
	Circle c1, c2;
	
	c1.centre.x_get();
	c1.centre.y_get();
	c1.r_get();

	c2.centre.x_get();
	c2.centre.y_get();
	c2.r_get();

	cout << p1.distance(p2) << endl;
	cout << c1.isintersect(c2) << endl;
}
