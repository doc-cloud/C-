
#include <iostream>
using namespace std;

class Location 
{ 
public:
	Location( int xx = 0 , int yy = 0 ) 
	{ 
		X = xx ;  Y = yy ;  cout << "Constructor Object.\n" ; 
	}

	Location(const Location & obj)
	{
		X = obj.X; Y = obj.Y;
	}
	~Location() 
	{ 
		cout << X << "," << Y << " Object destroyed." << endl ; 
	}
	int  GetX () { return X ; }		int GetY () { return Y ; }
private :   int  X , Y ;
} ;

//1.return value of function is an element(complex type), return value is a new anonymous object(so call copy constructor of anonymous class)

//the leave or stay of anonymous object
//if use anonymous object to initialize another type object, anonymous change to named object
//if use anonymous object to assign another type object, anonymous object be destruct

//like this, return a new object, anonymous
Location g()
{
	Location A(1, 2);
	return A;
}

void objplay2()
{
	g(); 
}

void objplay3()
{
	//if use anonymous object to initialize another type object, anonymous change to named object
	Location m = g(); 
	printf("anonymity change to instance\n");
	cout << m.GetX() << endl;;
}

void objplay4()
{
	//assign to m2, the anonymous object be destruct
	Location m2(1, 2);
	m2 = g();
	printf("assign to m2, the anonymous object be destruct\n");
	cout << m2.GetX() << endl;;
}

void main()
{
	//objplay2();
	//objplay3();
	objplay4();
	return ;
}

