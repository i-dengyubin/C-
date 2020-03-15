#include <iostream>

using namespace std;

class A {
public:
		int m_data;
		A (int data) : m_data(data) {
			cout << "A::A(int):" << this  << " " << sizeof(*this)<< endl;
		}
};

class B : virtual public A {
public:
		B(int data) : A(data) {
			cout << "B::B(int):" << this << " "<< sizeof(*this)<< endl;
		}
		void set(int data) {
			m_data = data;	
		}
};

class C : virtual public A {
public:
		C(int data) : A(data) {
			cout << "C::C(int):" << this << " " << sizeof(*this) << endl;
		}
		int get(void) {
			return m_data;	
		}
};

class D : public B, public C {
public:
		D(int data) : B(data), C(data),A(data) {
			cout << "D::D(int):" << this <<  " " << sizeof(*this) << endl;
		}
};
int main(void) {
	D d(100);
	d.set(200);
	cout << d.get() << endl;
	return 0;
}
