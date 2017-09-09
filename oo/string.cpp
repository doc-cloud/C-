#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class Array {
	public:
	Array(int i = 0)
	{
		len = i < 0 ? 0 : i;
		//ptr = (int *)malloc(i);
		ptr = new int [len];
	}
	Array(const Array & ar)
	{
		len = ar.len < 0 ? 0 : ar.len;
		ptr = new int [len];
		memcpy(ptr, ar.ptr, len * sizeof(int));
	}
	void setData(int i, int j)
	{
		ptr[i] = j;
	}
	int getData(int i)
	{
		return ptr[i];
	}
	int length()
	{
		return len;
	}
	~Array()
	{
		if (this->ptr) {
			len = 0;
			//free(this->ptr);
			delete [] ptr;
			ptr = NULL;
		}
	}
	private:
	int len;
	int *ptr;
};

int main()
{
	Array a1(10);
	for (int i = 0; i < a1.length(); i++)
		a1.setData(i, i);

	for (int i = 0; i < a1.length(); i++)
		cout << a1.getData(i) << endl;

	Array a2 = a1;

	for (int i = 0; i < a2.length(); i++)
		cout << a2.getData(i) << endl;
}
