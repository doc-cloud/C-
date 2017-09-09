#include<csignal>
#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;
void keycontrol(int signo)
{
	if (signo == SIGINT)
		cout << "CTRL + C pressed.";
	exit(signo);
}

int main(int argc, char *argv[])
{
	int i;
	signal(SIGINT, keycontrol);

	while (1) {
		cout << "going to sleep..." << endl;
		sleep(1);
	}
	return 0;
}
