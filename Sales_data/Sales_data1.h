#ifndef _SALES_DATA1_H_
#define _SALES_DATA1_H_
#include <iostream>
#include <string>
using namespace std;
class Sales_data1{
	//friend istream& operator >> (istream&,Sales_data1& s);
	//friend ostream& operator << (ostream&,Sales_data1& s);
	friend istream& read(istream&,Sales_data1&);
	friend ostream& print(ostream&,const Sales_data1&);
	private:
		string bookNo;
		unsigned units_sold;
		double revenue;
	public:
		Sales_data1() = default;
		Sales_data1(const string &s):bookNo(s){}
		Sales_data1(const string &s,unsigned n,double p):bookNo(s),units_sold(n),revenue(p*n){}
		Sales_data1(std::istream &);//此为函数声明 定义在外部
		string isbn() const{
			return bookNo;
		}
		Sales_data1& combine(const Sales_data1& b){
			if(bookNo==b.bookNo){
				units_sold+=b.units_sold;
				revenue+=b.revenue;
			}
			return (*this);
		}
		double avg_price() const{
			if(units_sold){
				return revenue/units_sold;
			}else{
				return 0.0;
			}
		}
};
istream& read(istream &,Sales_data1& s);
ostream& print(ostream &,const Sales_data1& s);
#endif
