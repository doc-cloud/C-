#include <iostream>
#include <cstring>
 
using namespace std;

struct Books {
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void BookPrint(struct Books Book1)
{
	      cout << "Book 1 title : " << Book1.title <<endl;
	         cout << "Book 1 author : " << Book1.author <<endl;
		    cout << "Book 1 subject : " << Book1.subject <<endl;
		       cout << "Book 1 id : " << Book1.book_id <<endl;
}

void BookPrint(struct Books *Book1)
{
	      cout << "Book 1 title : " << Book1->title <<endl;
	         cout << "Book 1 author : " << Book1->author <<endl;
		    cout << "Book 1 subject : " << Book1->subject <<endl;
		       cout << "Book 1 id : " << Book1->book_id <<endl;
}

int main()
{
	struct Books Book1;
	strcpy( Book1.title, "Learn C++ Programming");
	   strcpy( Book1.author, "Chand Miyan"); 
	      strcpy( Book1.subject, "C++ Programming");
	      Book1.book_id = 100;

	//BookPrint(Book1);
	BookPrint(&Book1);
	return 0;
}
