#include <iostream>
using namespace std;
class Base {
public:
		virtual void foo(void) {
			cout << "Base::foo()" << endl;
		}
		virtual void bar(void) {
			cout << "Base::foo()" << endl;
		}
		virtual void hum(int) {
			cout << "Base::hum(int)" << endl;
		}
public:
		virtual void pub(void) {
			cout << "Base::pub(void)" << endl;
		}
};

class Derived : public Base {
public:
		void foo(void) {
			cout << "Derived::foo()" << endl;
		}
		void bar(int x) {
			cout << "Derived::bar(int)" << endl;
		}

		void bar(void) const {
			cout << "Derived::bar() const"	 << endl;
		}
		// 形成不了覆盖关系，能够形成隐藏关系
		/*
		int hum(int x) {
			cout << "int Derived::hum()" << endl;
			return 0;
		}
		*/
		// 签名不一样
		int hum(void) {
			cout << "Derived::hum()" << endl;
		}
		// 试图做覆盖，但是返回值不能形成覆盖
private:
		void pub(void) {
			cout << "Derived::pub()" << endl;
		}
};
int main(void) {
	Derived d;
	Base& b = d;
	b.foo();
	b.bar();
	b.pub();
	return 0;
}
