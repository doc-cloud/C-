#include <iostream>
#include <pthread.h>
using namespace std;

struct thread_data {
	pthread_t tid;
	string message;
};

void *say_hello(void *args)
{
	struct thread_data *data = (struct thread_data *)args;
	cout << "from " << data->tid << endl;
	cout << "he said : " << data->message << endl;
	cout << "Please fuck me" << endl;
}

int main()
{
	pthread_t tids[5];
	struct thread_data td[5];
	for (int i = 0; i < 5; i++) {
		cout << "Creating thread... " << i << endl;
		td[i].tid = i;
		td[i].message = "heihei haha";
		int ret = pthread_create(&tids[i], NULL, say_hello, (void *)&td[i]);
		if (ret != 0)
			cout << "pthread_create: error code = " << ret << endl;
	}
	pthread_exit(NULL);
}
