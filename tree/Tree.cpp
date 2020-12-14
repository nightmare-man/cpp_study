#include <iostream>
using namespace std;
class B{
	public:
		B(int i){}
		B(){}

};
class Tree{
	public:
		Tree(int h);
		~Tree();
		void set(int years);
		void printsize();
	private:
		int height;
		B b;
};
Tree::Tree(int h):height(h){
	b=0;
	cout << "inside Tree::Tree()" << endl;
}
Tree::~Tree(){
	cout << "inside Tree::~Tree()" << height <<endl;
}
void Tree::set(int years){
	height=years;
}
void Tree::printsize(){
	cout << "Tree height is" << height <<endl;
}
int main(){
	Tree *p=new Tree(0);
	delete p;

}
