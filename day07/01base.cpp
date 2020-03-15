#include <iostream>
using namespace std;

class Base {
public:
		Base (void) : m_i(0) {
			cout << "Base()" << endl;
		}
		Base(int i) : m_i(i) {
			cout << "Base(int)"	 << endl;
		}
		~Base(void) {
			cout << "~Base()" << endl;
		}

		int m_i;
};

class Member {

public:
		Member(void) : m_i (0) {
			cout << "Member()" << endl;
		}

		Member(int i) : m_i(i) {
			cout << "Member(int)"	 << endl;
		}
		~Member() {
			cout << "~Memeber()"	 << endl;
		}
		int m_i;
};

class Derived : public Base {
public:
	Derived(void) {
		cout << "Derived()"	 << endl;
	}
	Derived(int i, int j) : Base(i), m_member(j) {
		cout << "Derived(int)" << endl;
	}
	~Derived(void) {
		cout << "~Derived()" << endl;
	}
	Member m_member;
};

int main(void) {
	Derived d;
	Derived d2(10, 20);
	return 0;
}
