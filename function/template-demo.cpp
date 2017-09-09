#include <iostream>
#include <string.h>

using namespace std;

template <class stype>
void bubble(stype *num, int count)
{
	int i, j;
	stype tmp;
	for (i = 0; i < count; i++)
		for (j = count - 1; j > i; j--)
			if (num[i] > num[j]) {
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
}

template <class ptype>
void print_sorted(ptype *num, int count)
{
	int i;
	for (i = 0; i < count; i++)
		cout << "num[" << i << "] = " << num[i] << endl;
}

int main()
{
	int num_int[] = {44, 43, 65, 23, 554, 78, 443, 87};
	double num_double[] = {44.5, 43.4, 65.3, 23.2, 554.1, 78.6, 443.8, 87.6};
	char num_char[] = "HUIFAJOEOIQNC";
	int count_int = sizeof(num_int) / sizeof(*num_int);
	int count_double = sizeof(num_double) / sizeof(*num_double);
	int count_char = strlen(num_char);
	bubble(num_int, count_int);
	bubble(num_double, count_double);
	bubble(num_char, strlen(num_char));
	cout << "sorted:" << endl;
	print_sorted(num_int, count_int);
	print_sorted(num_double, count_double);
	print_sorted(num_char, count_char);
	return 0;
}
