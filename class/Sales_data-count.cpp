#include "Sales_data.h"

#if 0
int
main()
{
 Sales_data total;
 //if (cin >> total.bookNo >> total.units_sold >> total.revenue) {
 if (read(cin, total)) {
  Sales_data trans;
  //while (cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
  while (read(cin, trans)) {
   //if (total.bookNo == trans.bookNo) {
   if (total.isbn() == trans.isbn()) {
    //total.units_sold += trans.units_sold;
    //total.revenue += trans.revenue;
    total.combine(trans);
   } else {
    //cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    print(cout, total);
    total = trans;
   }
  }
  cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
  print(cout, total);
 } else {
  cerr << "No data?!" << endl;
  return -1;
 }
 return 0;
}
#endif

int
main()
{
 Sales_data total(cin);
 if (!total.isbn().empty()) {
  while (cin) {
   Sales_data trans(cin);
   if (total.isbn() == trans.isbn())
    total.combine(trans);
   else {
    print(cout, total);
    total = trans;
   }
  }
  print(cout, total);
 } else {
  cerr << "No data?!" << endl;
  return -1;
 }
}
