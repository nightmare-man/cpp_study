#include <iostream>
using namespace std;
bool isShorter(const string &a,const string &b){
	return a.size()<b.size();
}
int main(){
	string a("hello");
	string b("world!");
	cout << a << endl;
	cout << b << endl;
	cout << (isShorter(a,b)?"shorter":"not shorter") << endl;
	return 0;
}
