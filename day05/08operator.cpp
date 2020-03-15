#include <iostream>
using namespace std;

class Integer {
private:
		int m_i;
public:
		Integer(int i) : m_i (i) {}
		void print(void) const {
			cout << m_i << endl;	
		}
		const Integer operator-(void) const {
			return Integer(-m_i);
		}
		friend const Integer operator~(const Integer& i)  {
			return Integer(i.m_i * i.m_i);
		}
};
int main(void) {
	Integer i(100);
	Integer j = -i; // j = i.operator-();
	j.print();
	j = ~i; // 平方
	j.print();
	return 0;
}
