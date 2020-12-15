#include <iostream>
#include "Sales_data1.h"
#include <vector>
using namespace std;
int main(){
	Sales_data1 temp("100x",10,4.5);
	Sales_data1 temp1("100x",10,4.6);
	vector<Sales_data1> v;
	v.push_back(temp);
	temp=temp.combine(temp1);
	print(cout,temp) << endl;
	temp1=v[0];
	print(cout,temp1) << endl;
	return 0;
}
