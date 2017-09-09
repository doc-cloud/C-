#include <iostream>
using namespace std;
const int SIZE = 10;

class safearay {
private:
	int arr[SIZE];
public:
	safearay()
	{
		register int i;
		for (i = 0; i < SIZE; i++) arr[i] = i;
	}
	int & operator[] (int i) {
		if (i > SIZE) {
			cout << "index over the maximum" << endl;
			return arr[1];
		}
		return arr[i];
	}
};

int main()
{
	safearay A;
	cout << "A[2] 的值为 : " << A[2] <<endl;
	cout << "A[5] 的值为 : " << A[5]<<endl;
	cout << "A[12] 的值为 : " << A[12]<<endl;
}
