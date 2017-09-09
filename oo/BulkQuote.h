#ifndef _BULKQUOTE_H_
#define _BULKQUOTE_H_
#include "Quote.h"

#include <string>

using namespace std;

class BulkQuote : public Quote {
public:
 BulkQuote(){};
 BulkQuote(const string & b, double p, size_t q, double disc): Quote(b, p), min_qty(q), discount(disc) {}
 double net_price(size_t n) const override;
 virtual ~BulkQuote(){};
private:
 size_t min_qty = 0;
 double discount = 0.0;
};
#endif
