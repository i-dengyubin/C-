#include <iostream>

using namespace std;
class A {
	virtual void foo(void) {}
};
class B : public A {};
class C : public B {};
class D {};
int main(void) {
	B b;
	A* pa = &b;
	cout << "pa = " << pa << endl;
	cout << "dynamic_cast:" << endl;
	B* pb = dynamic_cast<B*>(pa);
	cout << "pb = " << pb << endl;
	C* pc = dynamic_cast<C*>(pa);
	cout << "pc = " << pc << endl; // 返回空 --> 失败

	pc = static_cast<C*>(pa);
	cout << "pc = " << pc << endl;
	pb = static_cast<B*>(pa);
	cout << "pb = " << pb << endl;
//	pd = static_cast<D*>(pa);
	pc = reinterpret_cast<C*>(pa);
	cout << "pc = " << pc << endl;
	pb = reinterpret_cast<B*>(pa);
	cout << "pb = " << pb << endl;
	return 0;
}
