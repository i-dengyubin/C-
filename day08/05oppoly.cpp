#include <iostream>

using namespace std;

class Integer {
private:
		int m_r;
public:
		Integer(int r) : m_r(r) {
				
		}

		const Integer& operator+= (const Integer& i) const {
			m_r += i.m_r;	
			return *this;
		}
};

class Complex : public Integer {
public:
		Complex(int r, int i) : Integer(r) , m_i(i) {}
		const Complex operator+= (const )
};
