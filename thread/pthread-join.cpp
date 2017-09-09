#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

using namespace std;

void *wait(void *t)
{
	cout << "sleeping in thread" << endl;
	sleep(1);
	cout << "tid : " << (pthread_t)t << endl;
	pthread_exit(NULL);
}

int main()
{
	pthread_t tids[5];

	void *status;
	pthread_attr_t attr;
	pthread_attr_init(&attr);
	pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

	for (int i = 0; i < 5; i++) {
		cout << "Creating thread " << i << endl;
		int ret = pthread_create(&tids[i], NULL, wait, (void *)(long)i);
		if (ret != 0) {
			cout << "pthread_create: error code = " << ret << endl;
			exit(-1);
		}
	}

	pthread_attr_destroy(&attr);

	for (int i = 0; i < 5; i++) {
		int ret = pthread_join(tids[i], &status);
		if (ret != 0) {
			cout << "Error:unable to join," << ret << endl;
			         exit(-1);
		}
		cout << "Main: completed thread id :" << i ;
		cout << "  exiting with status :" << status << endl;
	}

	cout << "program exiting..." << endl;
	pthread_exit(NULL);
	return 0;
}
