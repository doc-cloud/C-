int
main()
{
 const int ci = 0, &cj = ci;
 decltype(ci) x = 0;
 decltype(cj) y = x;
 //decltype(cj) z;
 
 int i = 42, *p = &i, &r = i;
 decltype(r + 0) b;
 //decltype(*p) c;
 
 decltype(i) d;
 //decltype((i)) e;
}
