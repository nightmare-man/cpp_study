#include <iostream>
#include <string>
using namespace std;
using arr=int[10];
void f(arr& a1){
	for(int i=0;i<10;i++){
		a1[i]=i;
	}
}
int main(){
	arr a={0};
	f(a);
	cout << a[9] << endl;
	return 0;
}
