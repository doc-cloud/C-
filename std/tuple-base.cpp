#include <tuple>
#include <string>
#include <vector>

using namespace std;

int main()
{
 auto three_ints = make_tuple(10, 20, 30);
 using SomeTuple = tuple<string, vector<string>, pair<string, int> >;
 SomeTuple tuple_inst;
}
