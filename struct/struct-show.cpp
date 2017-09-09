#include <iostream>
#include <cstring>
 
using namespace std;

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

int main()
{
	struct Books Book1;
	strcpy( Book1.title, "Learn C++ Programming");
	   strcpy( Book1.author, "Chand Miyan"); 
	      strcpy( Book1.subject, "C++ Programming");

	      cout << "Book 1 title : " << Book1.title <<endl;
	         cout << "Book 1 author : " << Book1.author <<endl;
		    cout << "Book 1 subject : " << Book1.subject <<endl;
		       cout << "Book 1 id : " << Book1.book_id <<endl;
	return 0;
}
