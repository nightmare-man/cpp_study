#include <iostream>
#include <string>
using namespace std;
class Sales_data1{
	//friend istream& operator >> (istream&,Sales_data1& s);
	//friend ostream& operator << (ostream&,Sales_data1& s);
	friend istream& read(istream&,Sales_data1&);
	friend ostream& print(ostream&,Sales_data1&);
	private:
		string bookNo;
		unsigned units_sold=0;
		double revenue=0.0;
	public:
		Sales_data1() = default;
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
/*
istream& operator >> (istream& in,Sales_data1& s){
	in >> s.bookNo >> s.units_sold >> s.saleprice;
	return in;
}
ostream& operator << (ostream& out,Sales_data1& s){
	out << s.bookNo << " " << s.units_sold << " " << s.saleprice ;
	return out;
}
*/
istream& read(istream& in,Sales_data1& s){
	double price=0.0;
	in >> s.bookNo >> s.units_sold >> price;
	s.revenue=price*s.units_sold;
	return in;
}
ostream& print(ostream& out,Sales_data1& s){
	out << s.bookNo << " " << s.units_sold << " " << s.revenue <<\
	       " " << s.avg_price();
	return out;	
}
