#include <iostream>
using namespace std;

class A {
	virtual void foo(void) {
		cout << "A::foo()"	 << endl;
	}

	virtual void bar(void) {
		cout << "A::bar()"	<< endl;
	}
};

class B : public A {
public:
	void foo(void) {
		cout << "B::foo()" << endl;
	}
};
int main(void) {
	/*B b;
	A& a = b;
	b.foo();
	*/
	A a;
	void (**vptr) (void) = *(void(***)(void))&a;
	cout << (void*)vptr[0] << " " << (void*)vptr[1] << endl;
	vptr[0]();
	vptr[1]();
	B b;
	vptr = *(void(***)(void))&b;
	cout << (void*)vptr[0] << " " << (void*)vptr[1] << endl;
	vptr[0]();
	vptr[1]();
	return 0;
}
