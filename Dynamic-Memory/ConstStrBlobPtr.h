#include <vector>
#include <string>
#include <memory>
#include <initializer_list>

using namespace std;

class StrBlobPtr;

class StrBlob {
public:
 using size_type = vector<string>::size_type;
 friend class StrBlobPtr;

 StrBlobPtr begin();
 StrBlobPtr end();

 StrBlob():data(make_shared<vector<string> >()) {}
 StrBlob(initializer_list<string> il):data(make_shared<vector<string> >(il)) {}

 size_type size() const {return data->size();}
 bool empty() const {return data->empty();}
 
 void
 push_back(const string & t) {data->push_back(t);}
 
 void
 pop_back()
 {
  check(0, "pop_back on empty StrBlob");
  data->pop_back();
 }
 
 string & front()
 {
  check(0, "front on empty StrBlob");
  data->front();
 }
 string & back()
 {
  check(0, "back on empty StrBlob");
  data->back();
 }
 
 const string & front() const
 {
  check(0, "front on empty StrBlob");
  data->front();
 }
 const string & back() const
 {
  check(0, "back on empty StrBlob");
  data->back();
 }
private:
 void
 check(size_type i, const string & msg) const
 {
  if (i >= data->size())
   throw out_of_range(msg);
 }
 shared_ptr<vector<string> > data;
};

class StrBlobPtr {
public:
 StrBlobPtr(): curr(0) {}
 StrBlobPtr(StrBlob & a, size_t sz = 0): wptr(a.data), curr(sz) {}
 bool operator != (const StrBlobPtr & p) {return p.curr != curr;}

 string &
 deref() const
 {
  auto p = check(curr, "dereference past end");
  return (*p)[curr];
 }

 StrBlobPtr &
 incr()
 {
  check(curr, "increment past end of StrBlobPtr");
  ++curr;
  return *this;
 }
private:
 shared_ptr<vector<string> > check(size_t i, const string & msg) const
 {
  auto ret = wptr.lock();
  if (!ret)
   throw runtime_error("unbound StrBlobPtr");
  if (i >= ret->size())
   throw out_of_range(msg);
  return ret;
 }
 weak_ptr<vector<string> > wptr;
 size_t curr;
};

StrBlobPtr
StrBlob::begin()
{
 return StrBlobPtr(*this);
}

StrBlobPtr
StrBlob::end()
{
 return StrBlobPtr(*this, data->size());
}
