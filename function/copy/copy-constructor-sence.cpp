
#include <iostream>

using namespace std;

class Location 
{ 
public:
	Location( int xx = 0 , int yy = 0 ) 
	{ 
		X = xx ;  Y = yy ;  cout << "Constructor Object.\n" ; 
	}
	//copy constructor
	Location(const Location & obj)
	{
		X = obj.X; Y = obj.Y;
	}
	~Location() 
	{ 
		cout << X << "," << Y << " Object destroyed." << endl ; 
	}
	int  GetX ()
	{
		return X;
	}
	int GetY ()
	{
		return Y;
	}
private:
	int  X , Y;
};

void f(Location p)
{
	cout << p.GetX() << endl;
}

void playobj()
{
	Location  a(1, 2);
	Location  b = a;
	cout << "b object has initialized" << endl;

	//b param get initialization of p, will call copy struct function
	f(b);
}

int main()
{
	playobj();
	return 0;
}

