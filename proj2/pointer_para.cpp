#include <iostream>
using namespace std;
void swap(int* a,int* b){
	int temp= *b;
	*b=*a;
	*a=temp;
}
int main(){
	int a=3;
	int b=4;
	cout << "a:" << a << " " << "b:" << b << endl;
	swap(&a,&b);
	cout << "a:" << a << " " << "b:" << b << endl;
	return 0;
}
