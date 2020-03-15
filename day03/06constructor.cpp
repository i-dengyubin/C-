#include <iostream>
using namespace std;
class A{
public:
		/*
	A(void){
		cout << "A()" << endl;
	}*/
	A(int = 0){
		cout << "A()" << endl;
	}

	A(const A& that){
		cout << "A(const A& that)" << endl;
	}

};

class B{
private: 
		A m_a;
public:
		B(void){
			cout << "B()" << endl;
		}

		B(const B& that) : m_a(that.m_a){
			cout << "B(const B& that)"	<< endl;
		}
};

class C{
public:
		C(int data){
			m_data = data;	
		}
private:
		int m_data;
};
int main(void){
	B b;
	C ca[3] = {C(10), C(20), C(30)};
	B b1 = b; // B b2(b);
	return 0;
}
