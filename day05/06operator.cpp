#include <iostream>
using namespace std;

class Complex{
private:
		int m_r;
		int m_i;
		// 友元
		friend const Complex operator- (const Complex&, const Complex&);	

public:
		Complex(int r = 0, int i = 0) : m_r(r), m_i(i){}
		void print(void) {
			cout << m_r << '+'	 << m_i << 'i' << endl;
		}
		/*
		Complex add(Complex c) {
			return Complex(m_r + c.m_r, m_i + c.m_i); // 同一个类，可以访问私有
		}
		*/
		//从左到右的三个const 依次表示
		// 第一个：为了返回一个常对象, 禁止对加号表达式赋值
		// 第二个：支持常右操作数
		// 第三个：支持常左操作数
		const Complex operator+ (const Complex& that) const {
			return Complex(this->m_r + that.m_r, this->m_i + that.m_i);
		}
};

const Complex operator- (const Complex& l, const Complex& r) {
	return Complex(l.m_r - r.m_r, l.m_i - r.m_i);
}

int main(void) {
	const Complex c1(1,2);
	Complex c2(3,4);
	/*
	Complex c3 = c1.add(c2);
	Complex c4 = c3.add(c1);
	c4 = c4.add(c2);
	c3.print();
	c4.print();
	*/
	// Complex c3 = c1.operator+(c2)
	Complex c3 = c1 + c2 ; // 中缀表达式
	Complex c4 = c1 + c2 + c3;
	c3.print();
	c4.print();
	c4 = c3 - c1; // c4 = ::operator-(c3,c1)
	c4.print();
//	(c1 + c2) = c3; // 右值 = c3
	return 0;
}
