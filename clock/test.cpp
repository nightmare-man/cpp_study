#include <iostream>
using namespace std;
class A
{
	public:
		int i;
		void f();

};
void A::f()
{
	i=20;
	cout << i << endl;
	cout << "this :" << this << endl;
}
int main()
{
	A a;
	cout << a.i << endl;
	cout << &a << endl;
	a.f();
}
