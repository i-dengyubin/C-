#include <iostream>

using namespace std;

class Base {
public:
		Base(void) : m_i(0) {}
		Base(int i) : m_i(i) {}
		Base(const Base& that) : m_i(that.m_i) {}
		Base& operator= (const Base& that) {
			if(&that != this)
				m_i = that.m_i;	
			return *this;	
		}
		int m_i;
};
class Derived:public Base{
public:
		Derived(void) : m_i(0) {}
		Derived(int i, int j) : Base(i), m_i(j) {}
		Derived(const Derived& that) : Base(that), m_i(that.m_i) {}
		int m_i;
		Derived& operator= (const Derived& that) {
			if(&that != this)	{
				Base::operator=(that);
				m_i = that.m_i;	
			}
			return *this;
		}
};
int main(void) {
	Derived d1(100,200);
	Derived d2 = d1;
	cout << d2.m_i << " " << d2.Base::m_i << endl;
	cout << d1.m_i << " " << d1.Base::m_i << endl;

	Derived d3;
	cout << d3.m_i << " " << d3.Base::m_i << endl;
	d3 = d1;
	cout << d3.m_i << " " << d3.Base::m_i << endl;
	return 0;
}
