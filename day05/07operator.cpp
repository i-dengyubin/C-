#include <iostream>

using namespace std;

class Complex {
private:
		int m_r;
		int m_i;
public:
		Complex(int r = 0, int i = 0) : m_r(r), m_i(i) {}
		Complex& operator+= (const Complex& c) {
			m_r += c.m_r;
			m_i += c.m_i;		
			return *this;
		}
		void print(void) {
			cout << m_r << "+"	<< m_i << "i" << endl;
		}
		friend Complex& operator-= (Complex& l, const Complex& r) {
			l.m_r -= r.m_r;
			l.m_i -= r.m_i;	
			return l;
		}

};
int main(void) {
	Complex c1(1,2)	,c2(3,4), c3(5,6);
	c1 += c2; // c1.operator+= (c2);
	(c1 += c2) = c3;
	c1.print();
	c1 -= c2; // ::operator-= (c1,c2)
	c1.print();
	return 0;
}
