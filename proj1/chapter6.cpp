#include "chapter6.h"
int fact(int num){
	int ret=1;
	int temp=num;
	while(temp>1){
		ret*=temp;
		temp--;
	}
	return ret;
}
static int pow_int(int a,int b){
	int ret=1;
	for(int i=0;i<b;i++){
		ret*=a;
	}
	return ret;
}
int abs(int num){
	int len=sizeof(int)*8;
	unsigned num1=(unsigned)num;
	return (int)(pow_int(2,len-1)* (num1>>(len-1))+pow_int(-1, (num1>>(len-1)) )*(num1|(~(1<<(len-1)))));
}
