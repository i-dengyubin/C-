#include <iostream>

using namespace std;
class Integer{
private:
	int m_i;
public:
	Integer(int i = 0) : m_i (i) {}
	void print(void) const {
		cout << m_i << endl;	
	}
	// 前++
	Integer& operator++ (void) {
		++m_i;	
		return *this;
	}
	// 前--
	friend Integer& operator-- (Integer& i) {
		--i.m_i;	
		return i;
	}
	const Integer operator++(int) {
		Integer old = *this;
		++*this;
		return old;
	}

	friend const Integer operator--(Integer& i, int) {
		Integer old = i;
		--i;	
		return old;
	}
};
int main(void) {
	Integer i (23);
	Integer j = ++i; // 24 // Integer j = i.operator++();
	i.print();
	j.print();
	j = ++++++i; // 27
	i.print();
	j.print();
	j = ----i; // ::operator--(::operator--(i))
	i.print();
	j.print(); // 25
	j = i++;
	j.print(); // 25
	i.print(); // 26
	j = i--;
	i.print(); // 25
	j.print(); // 26
	return 0;
}
