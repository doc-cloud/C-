
#include <iostream>
#include <bitset>
#include <utility>
#include <string>
#include <iostream>

using namespace std;

template<size_t N>

class Quiz {
public:
 Quiz() = default;
 Quiz(string & s): bitquiz(s) {}

 template<size_t M>
 friend size_t grade(Quiz<M> const &, Quiz<M> const &);

 template<size_t M>
 friend ostream & operator << (ostream &, Quiz<M> const &);

 void update(pair<size_t, bool>);
private:
 bitset<N> bitquiz;
};

template<size_t M>
size_t grade(Quiz<M> const & corAns, Quiz<M> const & stuAns)
{
 auto result = stuAns.bitquiz ^ corAns.bitquiz;
 result.flip();
 return result.count();
}

template<std::size_t N>
void Quiz<N>::update(std::pair<std::size_t, bool> pair)
{
    bitquiz.set(pair.first, pair.second);
}

template<std::size_t M>
std::ostream& operator<<(std::ostream& os, Quiz<M> const& quiz)
{
    os << quiz.bitquiz;
    return os;
}

int
main()
{
 string s = "1010101";
 Quiz<10> quiz(s);
 cout << quiz << endl;

 quiz.update(make_pair(1, true));
 cout << quiz << endl;

 string answer = "10011";
 string stu_answer = "10101";
 Quiz<5> ans(answer), stu_ans(stu_answer);
 cout << grade(ans, stu_ans) << endl;
}
