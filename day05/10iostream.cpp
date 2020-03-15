#include <iostream>

using namespace std;

class Complex {	
private:
		int m_r;
		int m_i;
public:
		Complex(int r = 0, int i = 0) : m_r(r) , m_i(i) {}
		friend ostream& operator<< (ostream& os , const Complex& c) {
			return os << c.m_r << " + "	 <<  c.m_i << "i" ;
		}
		friend istream& operator>> (istream& is, Complex& c) {
			return is >> c.m_r >> c.m_i;	
		}
	 
};

int main(void) {
	Complex c1(12, 24) , c2(23, 45);
	cout << c1  << " " << c2 << endl;
	// ::operator<<(cout, c1).operator<<(" ", c2).operator<<(endl)
	Complex c3;
	cin >> c3;
	cout << c3  << endl;
	return 0;
}


