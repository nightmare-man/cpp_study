#include <iostream>
#include <vector>
using namespace std;
void print_v(vector<int> & v){
	if(v.empty()){
		return;
	}else{
		cout << v[v.size()-1] << endl;
		v.pop_back();
		print_v(v);
	}
}
int main(){
	vector<int> v{1,2,3,4,5,6,7};
	print_v(v);
	return 0;
}
