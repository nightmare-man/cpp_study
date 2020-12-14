#include <iostream>
#include "Sales_data1.h"
using namespace std;
int main(){
	Sales_data1 trans1,trans2;
	cout << "请输入销售记录:" << endl;
	read(cin,trans1);
	read(cin,trans2);
	if(trans1.isbn()==trans2.isbn()){
		print(cout,trans1.combine(trans2));
	}else{
		cout << "isbn不同" << endl;
	}
	return 0;
}
