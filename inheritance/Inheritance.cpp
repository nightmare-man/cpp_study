#include <iostream>
using namespace std;
class A{
	public:
		A():i(0){cout << "A::A()" << endl;}
		~A(){cout << "A::~A()" << endl;}
		void print(){cout << "A::f()" << i << endl;}
	protected:
		void set(int ii){i=ii;}
	private:
		int i;

};
class B : public A{//class B is a child of class A
	public:
		void f(){cout << "B::f()" << endl;set(100);}
};
int main(){
	B b;
	//b.set(10);
	b.f();
	b.print();
	//b.f();
	return 0;
}
