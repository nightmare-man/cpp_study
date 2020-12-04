#ifndef _COMPLEX_
#define _COMPLEX_
#include <cmath>

class complex
{
public://能被外界访问的	
	complex (double r=0,double i=0) //构造函数 c++支持默认值
		:re(r),im(i)   //initialization list 构造函数才有的写法，初始化成员变量
						//也可以在大括号里赋值，但是在不同阶段，这是初始化阶段，而大括号是执行阶段
	{}
	//构造函数可能有多个:重载（和当前类不同的参数就是重载，和父类不同则是多态）
	//之所以能实现重载，是因为 同名函数 编译生成的符号里  带有参数部分（默认参数不算） 比如 real@sdfsdg
	//符号表里的符号肯定都不同 

	complex& operator += (const complex&);
	double real() const {return re;}
	double imag() const {return im;}
	void real(double r) 
private://不能被外界访问，封装起来的
	double re,im;
	friend complex&__dopal(complex*,const complex&);
};


#endif