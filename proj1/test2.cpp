#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
	char a='a';
	const char * p=&a;
	char * b=const_cast<char*>(p);
	cout << a << endl;
	*p='b';
	cout << a << endl;
	return 0;
}
