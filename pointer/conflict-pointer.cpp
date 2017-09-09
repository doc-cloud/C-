# include<iostream>

using namespace std;

const double * f1(const double * ar, int n)
{
	return ar;
}

const double * f2(const double ar[], int n)
{
	return ar + 1;
}

const double * f3(const double ar[], int n)
{
	return ar + 2;
}

int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double *(*p1)(const double *, int) = f1;
	auto p2 = f2;

	cout << "使用指向函数的指针:\n"
		<< ",地址值:\n"
		<< (*p1)(av, 3) << ": " << *(*p1)(av, 3) << endl
		<< p2(av, 3) << ": " << *p2(av, 3) << endl;

	const double *(*pa[3])(const double *, int) = { f1, f2, f3 };
	auto pb = pa;

	cout << "\n使用数组的指针来函数:\n"
		<< ",地址值\n";
	for (int i = 0; i < 3; i++)
		cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << endl;

	cout << "\n使用指向一个函数的指针的指针:\n"
		<< ",地址值\n";
	for (int i = 0; i < 3; i++)
		cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << endl;

	cout << "\n使用指针的functers数组:\n"
		<< ",地址值\n";
	auto pc = &pa;
	cout << (*pc)[0](av, 3) << ": " << *(*pc[0])(av, 3) << endl;

	const double *(*(*pd)[3])(const double *, int) = &pa;

	const double * pdb = (*pd)[1](av, 3);
	cout << pdb << ": " << *pdb << endl;
	cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << endl;
	return 0;
}
