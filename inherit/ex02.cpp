/*
class base{
 private: int i;
 public:   base(int x){i=x;}
};

class derived: public base{
 private: int i;
 public:   derived(int x, int y) {i=x;}
           void printTotal() {int total = i+base::i;}
};
*/

class base{
 protected: int i;
 public:   base(int x){i=x;}
};
class derived: public base{
 private: int i;
 public:   derived(int x, int y): base(x) {i=x;}
           void printTotal() {int total = i+base::i;}
};
