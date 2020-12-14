#include <iostream>
#include <string>
using namespace std;
void reset(int& a){
	a=0;
}
string::size_type find_char(const string &s,char c,string::size_type &cnt){
	auto ret=s.size();
	cnt=0;
	for(decltype(ret) i=0;i!=s.size();i++){
		if(s[i]==c){
			cnt++;
			if(ret==s.size()){
				ret=i;
			}
		}
	}
	return ret;
}
int main(){
	//int i=43;
	//cout << i << endl;
	//reset(i);
	//cout << i << endl;
	
	string s("hello,world!");
	cout << s << endl;
	string::size_type cnt=0;
	int first=0;
	first=find_char(s,'o',cnt);
	cout << "first:" << first << " " << "cnt:" << cnt << endl;
	return 0;
}
