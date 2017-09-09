

const int *
find(const int *array, int n, int x)
{
 const int *p = array;
 for (int i = 0; i < n; ++i) {
  if (*p == x)
   return p;
  ++p;
 }
 return NULL;
}

template <typename T>
const T *find(const T * array, int n, T x)
{
 const T *p = array;
 for (int i = 0; i < n; ++i) {
  if (*p == x)
   return p;
  ++p;
 }
 return NULL;
}
