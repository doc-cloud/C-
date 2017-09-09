/*
（5）int (*(*func)(int *p))[5];

func是一个函数指针，这类函数具有int*类型的形参，返回值是指向数组的指针，所指向的数组的元素是具有5个int元素的数组。

要注意有些复杂指针声明是非法的，例如：

（8）int (*(*func)[5][6])[7][8];

func是一个指向数组的指针，这类数组的元素是一个具有5X6个int元素的二维数组，而这个二维数组的元素又是一个二维数组。typedef分解：

typedef int (*PARA)[7][8];
typedef PARA (*func)[5][6];

（9）int (*(*(*func)(int *))[5])(int *);

func是一个函数指针，这类函数的返回值是一个指向数组的指针，所指向数组的元素也是函数指针，指向的函数具有int*形参，返回值为int。typedef分解：

typedef int (*PARA1)(int*);
typedef PARA1 (*PARA2)[5];
typedef PARA2 (*func)(int*);

（10）int (*(*func[7][8][9])(int*))[5];

func是一个数组，这个数组的元素是函数指针，这类函数具有int*的形参，返回值是指向数组的指针，所指向的数组的元素是具有5个int元素的数组。typedef分解：

typedef int (*PARA1)[5];
typedef PARA1 (*PARA2)(int*);
typedef PARA2 func[7][8][9];

【小结】实际当中，需要声明一个复杂指针时，如果把整个声明写成上面所示的形式，对程序可读性是一大损害。应该用typedef来对声明逐层分解，增强可读性。例子（8）（9）（10）给出了typedef分解。另外，函数不能声明返回一个函数类型。
*/

/*
int (*func)(int *p);

int (*func)(int *p, int (*f)(int*));

int (*func[5])(int *p);

int (*(*func)[5])(int *p);

int (*(*func)(int *p))[5];

int func(void) [5]; //错误

int func[5](void); //错误

int (*(*func)[5][6])[7][8];

int (*(*(*func)(int *))[5])(int *);

int (*(*func[7][8][9])(int*))[5];

int (*func)(int *p);
*/

#include <stdio.h>

int
func0(int * p)
{
 printf("func0\n");
}

int
func1(int * p, int (*f)(int *))
{
 printf("func1\n");
}

int
func2(int * p)
{
 printf("func2\n");
}

void
main()
{
 int integer_num = 17945;

 int * ptr_int = &integer_num;

 int (* pfn_func0)(int * p) = func0;

 int (* pfn_func1)(int * p, int (* f)(int *)) = func1;
 
 int (* arr_func2[5])(int * p) = {func2, func2, func2, func2, func2};
 
 int (* (* ptr_to_arr_func3)[5])(int * p) = &arr_func2;
 
 //int (* (* func)(int * p))[5];

 

 //int arr_7_8[7][8] = {
 // 0, 1, 2, 3, 4, 5, 6, 7,
 // 8, 9, 10, 11, 12, 13, 14, 15,
 //};

 //int (* (* ptr_to_arr_func5)[5][6])[7][8] = {
 // arr_7_8, arr_7_8, arr_7_8, arr_7_8, arr_7_8, arr_7_8,
 // arr_7_8, arr_7_8, arr_7_8, arr_7_8, arr_7_8, arr_7_8,
 // //&arr_7_8, &arr_7_8, &arr_7_8, &arr_7_8, &arr_7_8, &arr_7_8,
 // //&arr_7_8, &arr_7_8, &arr_7_8, &arr_7_8, &arr_7_8, &arr_7_8,
 //};
 
 //int (*(*(*func)(int *))[5])(int *);
 //
 //int (*(*func[7][8][9])(int*))[5];
 //
 //int (*func)(int *p);

 //char* const* (*ss[23][200])(void (*)(int h, void (*)(void)));

 pfn_func0(ptr_int);

 pfn_func1(ptr_int, pfn_func0);

 arr_func2[2](ptr_int);

 //(*ptr_to_arr_func3)[2](ptr_int);
}
