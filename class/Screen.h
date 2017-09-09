#include <string>
#include <vector>
#include <iostream>

using namespace std;

class Screen;

class Window_mgr {
public:
 using ScreenIndex = vector<Screen>::size_type;
 inline void clear(ScreenIndex);
private:
 //vector<Screen> screens{Screen(24, 80, ' ')};
 vector<Screen> screens;
};

class Screen {
 friend void Window_mgr::clear(ScreenIndex);
public:
 typedef string::size_type pos;
 Screen() = default;
 Screen(pos ht, pos wd): height(ht), width(wd), contents(ht * wd, ' ') {}
 Screen(pos ht, pos wd, char c): height(ht), width(wd), contents(ht * wd, c) {}
 char get() const {return contents[cursor];}
 inline char get(pos ht, pos wd) const;
 Screen & move(pos r, pos c);
 Screen & set(char);
 Screen & set(pos r, pos col, char c);
 Screen & display(ostream & os)
 {
  do_display(os);
  return *this;
 }
 const Screen & display(ostream & os) const
 {
  do_display(os);
  return *this;
 }
 pos size() const;
 void dummy_fcn(pos height)
 {
  cursor = width * height;
 }
private:
 pos cursor = 0;
 pos height = 0, width = 0;
 string contents;
 mutable size_t access_ctr;
 void do_display(ostream & os) const {os << contents;}
};

Screen::pos
Screen::size() const
{
 return height * width;
}

inline void Window_mgr::clear(ScreenIndex i)
{
 if (i >= screens.size())
  return;
 Screen & s = screens[i];
 s.contents = string(s.height * s.width, ' ');
}

inline Screen &
Screen::move(pos r, pos c)
{
 pos row = r * width;
 cursor = row + c;
 return *this;
}

char
Screen::get(pos r, pos c) const
{
 pos row = r * width;
 return contents[row + c];
}

Screen &
Screen::set(char c)
{
 contents[cursor] = c;
 return *this;
}

Screen &
Screen::set(pos r, pos col, char c)
{
 contents[r * width + col] = c;
 return *this;
}
