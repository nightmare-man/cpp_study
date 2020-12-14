#include <iostream>
#include <vector>
#include <string>
typedef int int_array [3];
using namespace std;
int main(){
	int v[3][3]={1,2,3,4,5,6,7,8,9};
	for(auto &row : v){
		for(auto &col : row){
			cout << col << endl;
		}
	}
}
