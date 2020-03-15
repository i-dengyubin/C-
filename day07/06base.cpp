#include <iostream>

using namespace std;
class Base{
	
};

class Derived : private Base {
public:
		void foo(void) {
			Base& rb = *this;	
		}
};
int main(void) {
	Derived d;
	//Base& rb = static_cast<Base&>d;
	//Base* pb = static_cast<Base*>&d;
	return 0;
}
