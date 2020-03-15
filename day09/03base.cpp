#include <iostream>
using namespace std;

class Base {
private:
public:
		Base(void) {
			cout << "Base::Base()"	<< endl;
		}
		virtual ~Base(void) {
			cout << "Base::~Base()"	 << endl;
		}
};

class Derived : public Base {
public:
	Derived(void) {
		cout << "Derived:Derived()"	 << endl;
	}
	~Derived(void) {
		cout << "Derived::~Derived" << endl;
	}
};

int main(void){
	Base* pb = new Derived;
	delete pb;

	return 0;
}
