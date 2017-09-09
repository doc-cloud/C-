#include <iostream>
#include <pthread.h>
using namespace std;

void *say_hello(void *args)
{
	cout << "fuck me" << endl;
}

int main()
{
	pthread_t tids[5];
	for (int i = 0; i < 5; i++) {
		int ret = pthread_create(&tids[i], NULL, say_hello, NULL);
		if (ret != 0)
			cout << "pthread_create: error code = " << ret << endl;
	}
	pthread_exit(NULL);
}
