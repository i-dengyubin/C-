#include <iostream>
using namespace std;


class A{
public:
	A(void) {
		cout << "A()" << endl;
	}
	~A() {
		cout << "~A()" << endl;
	}
private:
		
};
class B{
public:
	B():m_a (new A) {
		cout << "B()" << endl;
	}
	~B() {
		cout << "~B()" << endl;
		delete m_a;
	}
private:
	A* m_a;	
};
int main(void) {
	B b;
	return 0;
}
