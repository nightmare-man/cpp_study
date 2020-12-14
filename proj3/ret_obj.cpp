#include <iostream>
#include <string>
using namespace std;
string &f(){
	string a("hello");
	return a;
}
int main(){
	string b=f();
	cout << b << endl;
	return 0;
}
