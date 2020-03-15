#include <iostream>
using namespace std;

class A{
public:
	A(void){}
	A(const A& that){
		cout << "A(const A& that)" << endl;
	}
};

class B{
public:
	B(void){}
	B(const B& that){
		cout << "B(const B& that)" << endl;
	}
};

void foo(A a){}
A bar(void){
	A a;
	cout << &a << endl;
	return a;
}

int main(void){
		/*
	A a1;
	A a2(a1);
	A a3(a2);
*/
	A a4 = bar(); // 不优化 g++ 08cpcons.cpp -fno-elide-constructors
	cout << &a4 << endl;
	return -3;
}
