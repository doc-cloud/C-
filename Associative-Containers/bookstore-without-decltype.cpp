#include <set>

#include "Sales_data.h"

using namespace std;

auto
isbn_less(Sales_data const & lhs, Sales_data const & rhs) -> bool
{
 return lhs.isbn() < rhs.isbn();
}

int
main()
{
 using Less = bool (*)(Sales_data const &, Sales_data const &);
 std::multiset<Sales_data, Less> bookstore(isbn_less);
}
