#include <iostream>
     using namespace std;
 
     class Base {
        public:
                int val;
                Base() { val=1;};
     };
 
     //class Derive: Base {
     class Derive: public Base {
        public:
                int val;
                Derive(int i) { val=Base::val+i; };
     };
 
     int main(int, char**, char**) {
        Derive d(10);
                cout<<d.Base::val<<endl<<d.val<<endl;
             return 0;
     }
