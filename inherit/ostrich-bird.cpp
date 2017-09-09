/*
里氏代换原则（LiskovSubstitution Principle，简称LSP）说的是：一个软件实体如果使用的是一个基类的话，那么一定适用于其子类，而且它根本不能够察觉出基类对象

和子类对象的区别。也就是说，在软件实体里面，把父类都换成其子类，程序的行为是不会发生变化的。

里氏代换原则（LSP）：子类型必须能替换掉它的父类型，反过来代换原则不成立。

里氏代换原则是继承复用的基石，只有当衍生类可以替换掉基类，软件单位的功能不会受到影响的时候，基类才能真正被复用，而衍生类也才能够在基类的基础上添加新的行为。

答案的否定的。这貌似有些荒唐，在生物界中，鸵鸟隶属鸟纲没有错，

但是在程序里面，鸵鸟类不能继承鸟类，因为根据LSP（里氏代换原则），如果鸵鸟类继承了鸟类，鸟类会飞，那么鸵鸟类也会飞了，但实际上鸵鸟类是不会飞的，只是能奔跑的很快。

在 java 语言中，LSP（里氏代换原则）会在编译期间被检查，当然，这只是与实现无关的，纯语法意义上的检查，如果某一程序违反了这一原则，java 编译器在编译的时候是不会

让其通过的，这时就会出现编译错误。
*/
#include<iostream>
#include<string>
using namespace std;
 
class bird
{
public:
   void eat();
   void sleep();
   void fly();
};
 
class ostrich
{
public:
   bird eat(){cout<<"ostrich eat";};
   bird sleep(){cout<<"ostrich sleep";};
 
 };
 
int main()
{
    ostrich xiaoq;
    xiaoq.eat();
    xiaoq.sleep();
    return 0;
}
