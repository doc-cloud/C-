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

	while (++i) {
		cout << "going to sleep..." << endl;
		if (i == 3) raise(SIGINT);
		sleep(1);
	}
	return 0;
}
