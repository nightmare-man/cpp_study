#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main()
{
	int v[3][3]={1,2,3,4,5,6,7,8,9};
	for(int (&row)[3]:v){
		for(int col:row){
			cout << col << endl;
		}
	}
	return 0;
}
