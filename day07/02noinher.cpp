#include <iostream>

using namespace std;


class Base {
public:
	static Base* createInstance (void)	 {
		return new Base;	
	}
private:
	Base(void) {}
};

class Derived : public Base {
		
};
int main(void) {
//	Derived d;
	Base* pb = Base::createInstance();
	return 0;
}
