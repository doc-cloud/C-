int
main()
{
 int i = 0, &r = i;
 auto a = r;
 const int ci = i, &cr = ci;
 auto b = ci;
 auto c = cr;
 auto d = &i;
 auto e = &ci;

 const auto f = ci;
 auto &g = ci;
 //auto &h = 42;
 const auto &j = 42;

 auto k = ci, &l = i;
 auto &m = ci, *p = &ci;
 //auto &n = i, *p2 = &ci;
 
 a = 42;
 b = 42;
 c = 42;
 d = 42;
 e = 42;
 g = 42;
}
