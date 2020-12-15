#include <iostream>
#include "Sales_data1.h"
using namespace std;
istream& read(istream& in,Sales_data1& s){
	double price=0.0;
	in >> s.bookNo >> s.units_sold >> price;
	s.revenue=price*s.units_sold;
	return in;
}
ostream& print(ostream& out,const Sales_data1& s){
	//使用const 引用形参，这样就能传入临时对象和const引用
	out << s.bookNo << " " << s.units_sold << " " << s.revenue <<\
	       " " << s.avg_price();
	return out;	
}
Sales_data1 add(Sales_data1& lhs,Sales_data1& rhs){
	Sales_data1 sum=lhs;//拷贝赋值
	sum.combine(rhs);
	return sum;
}
Sales_data1::Sales_data1(std::istream& in){
	read(in,*this);
}
