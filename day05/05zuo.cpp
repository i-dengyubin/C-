#include <iostream>

using namespace std;
int g;

int foo(void){
	return g;
}

int& bar(void) {return g;}

void func (int& c) {
	cout << "func()" << endl;
}
void func (const int& c) {
	cout << "func(const int&)" << endl;
}

int main(void){
	int i;
	int* p = &i;
	i = 10; // 不能取10的地址, 右值 // 临时变量是右值
	// p = &10; // error 10 --> 字面值 p = 临时值
	// 10++ // error
//	foo() = 10; // error
//	++foo(); // error
	bar() = 10; // 返回的是一个左值引用
	int a = 10, b = 20, c;
	c = a + b; // a + b 是一个右值 error
	(a = b) = 10; // a = b // 返回a 的自引用
	(a += b) = 10;
	++a = 1000; //  左值引用
	cout << a << endl;
	++++a ;
	cout << a << endl;
	// a++ = 1000; // 右值
	// a++++
//	(a + b) = 10;
	char h = 0;
	i = h; // 隐式类型转换产生右值
//	int& r = h; // 左值引用不能引用右值
	const int& r = h; // 常左值引用 万能引用 可以左 可以右
		
	func(h)	; // func(const int&)
	
	return 0;
}
