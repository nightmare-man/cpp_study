#ifndef _SCREEN_H_
#define _SCREEN_H_
#include <string>
#include <vector>
using namespace std;
class Screen{
public:
	using pos = std::string::size_type;
	//typedef std::string::size_type;
	Screen() = default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(c){}
	Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}
	char get()const{ return contents[cursor];}//定义在类里函数隐式内联
	inline char get(pos row,pos col) const;
	inline Screen& move(pos row,pos col);
	inline Screen& set(char c);
	inline Screen& set(pos row,pos col,char c);
	inline Screen& display(ostream &);
	inline const Screen& display(ostream &) const;
private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;
	mutable size_t access_ctr=0;//mutable 表示可变的数据成员 无论如何都能修改它，只要有访问权。
};
class Window_mgr{
	private:
		vector<Screen> s{Screen(24,80,' ')};
};
inline Screen& Screen::move(pos row,pos col){
	cursor=row*width+col;
	return *this;
}
inline char Screen::get(pos row,pos col){
	return contents[row*width+col];
}
inline Screen& Screen::set(char c){
	contents[cursor]=c;
	return *this;//返回引用 而非副本 就可以实现 myScreen.move(4,0).set('c')
	//这种操作了 函数式编程？
}
inline Screen& Screen::set(pos row,pos col,char c){
	contents[row*width+col]=c;
	return *this;
}
inline Screen& Screen::display(ostream &){
	
}
#endif
