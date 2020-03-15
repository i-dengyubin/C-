#include <iostream>
#include <cstring>
#include <typeinfo>
using namespace std;

class A {
	virtual void foo(){}
};

class C :public A{};
typedef struct B {
	
}B;

void func(A& a) {
	//if(!strcmp(typeid(a).name(), "1C"))
		if(typeid(a) == typeid(C))
			cout << "C object" << endl;
}
int main(void) {
	int x;
	cout << typeid(x).name() << endl;
	cout << typeid(double*).name() << endl;
	cout << typeid(unsigned int).name() << endl;
	cout << typeid(double[10]).name() << endl;
	cout << typeid(double[2][3]).name() << endl;
	cout << typeid(int(*)[5]).name() << endl;
	cout << typeid(int*[5]).name() << endl;
	cout << typeid(int* (*)(unsigned int)).name() << endl;
	cout << typeid(int(*[5])(void)).name() << endl;
	cout << typeid(A).name() << endl;
	cout << typeid(B).name() << endl;
	A* pa = new C;
	cout << typeid(*pa).name() << endl;
	func(*(new C));
	return 0;
}
