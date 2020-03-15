#include <iostream>
using namespace std;

class A{
private:
	mutable int  m_data;	
	int m_c;
public:
	A(int data = 0, int c = 0) : m_data(data), m_c(c) {}
	void print(void) const {
		cout << m_data++ << endl;	
		cout << m_c << endl;
	}
	/*
	 * void print(const A* this) {
	 * cout << m_data << endl;
	 * }
	 * */
	void foo(void) {
		cout << " not const" << endl;
	}
	void foo(void) const {
		cout << "const " << endl;
	}
};
int main(void){
	A a(100, 200);
	a.print();
	a.print();
	a.foo(); // foo(&a)
	const A& cr = a;
	cr.foo(); // foo(&cr)
	const A* cp = &a;
	cp->foo(); // foo(cp);
	return 0;
}
