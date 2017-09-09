#include <iostream>
 
using namespace std;

class Line {
public:
	void setLength( double len );
	double getLength( void );
	Line(double len);  // 这是构造函数
private:
	double length;
};

//Line::Line(double len)
//{
//	    cout << "Object is being created" << endl;
//	    length = len;
//	    cout << "length = " << length << endl;
//}

Line::Line(double len): length(len)
{
	cout << "Object is being created" << endl;
	cout << "length = " << length << endl;
}

void Line::setLength( double len )
{
	length = len;
}

double Line::getLength( void )
{
	return length;
}

int main()
{
	Line line(100);
	line.setLength(6.0);
	cout << "Length of line : " << line.getLength() <<endl;
}