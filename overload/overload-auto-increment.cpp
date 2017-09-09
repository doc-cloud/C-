#include <iostream>

using namespace std;

class Time {
private:
	int hours;
	int minutes;
public:
	Time(void)
	{
		hours = minutes = 0;
	}
	Time(int h, int m)
	{
		hours = h;
		minutes = m;
	}
	void displayTime(void)
	{
		cout << hours << ":" << minutes << endl;
	}
	Time operator ++()
	{
		++minutes;
		if (minutes >= 60) {
			++hours;
			minutes -= 60;
		}
		if (hours >= 24)
			hours -= 24;
		return Time(hours, minutes);
	}
	Time operator ++(int)
	{
		Time t(hours, minutes);
		++minutes;
		if (minutes >= 60) {
			++hours;
			minutes -= 60;
		}
		if (hours >= 24)
			hours -= 24;
		return t;
	}
};

int main()
{
	Time t1(11, 59);

	++t1;
	t1.displayTime();
	++t1;
	t1.displayTime();

	t1++;
	t1.displayTime();
	t1++;
	t1.displayTime();
}
