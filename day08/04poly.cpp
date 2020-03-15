#include <iostream>

using namespace std;

class Base {
public:
		Base(void) {
			this->fun();	
		}
		~Base(void) {
			this->fun();	
		}
		virtual int cal(int x, int y) const {
			return x + y;	
		}
		void foo(void) {
			bar();	// this->bar();
		}
		virtual void bar(void) {
			cout << "Base::bar()" << endl;
		}
		virtual void fun(void) {
			cout << "Base::foo()" << endl;
		}
};

class Derived : public Base {
public:
	int cal(int a, int b) {
		return a * b;	
	}

	void bar(void) {
		cout << "Derived::bar()" << endl;
	}

	virtual void fun(void) {
		cout << "Derived::fun(void)" << endl;
	}
};

int main(void) {
	Derived d;
	Base b = d;
	d.foo();
	d.fun();
	cout << b.cal(100, 200) << endl;
	return 0;
}
