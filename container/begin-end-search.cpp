auto
begin_end_search(vector<int>const_iterator begin, vector<int>const_iterator end, int value)
{
 for (; begin != end; ++begin)
  if (*begin == value)
   return begin;
 return end;
}
