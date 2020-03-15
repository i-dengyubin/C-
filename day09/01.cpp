#include <iostream>

using namespace std;

class A {
//	virtual void foo(void) {}
	virtual void foo(void) = 0;
	virtual void bar(void) = 0; // 只有一个虚函数指针
};
int main(void) {
	cout << sizeof(A) << endl;
	return 0;
}
