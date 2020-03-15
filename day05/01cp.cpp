#include <iostream>
using namespace std;

class A{
public:
		A(int data = 0):m_data(data) {}
		A(const A& that) : m_data(that.m_data){}
		int m_data;
};
int main(void){
	A a1(100);
	A a2 = a1; // 不用引用，无线次拷贝构造
	cout << a1.m_data << endl;
	cout << a2.m_data << endl;
	return 0;
}
