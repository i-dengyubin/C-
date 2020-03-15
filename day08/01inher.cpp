#include <iostream>

using namespace std;

class Base{
private:
	int m_data;
public:
	Base(int data) : m_data (data) {}
	void print(void) const {
		cout << m_data << endl;	
	}
};

class Derived : public Base {
private:
		string m_info;
public:
		Derived(int data, const string& info) : Base(data), m_info(info) {}
		void show(void) const {
			print();	
			cout << m_info << endl;
		}
		void foo(void) const {
			cout << "Derived::foo(void)" << endl;
//			m_info = "123";
		}
};

int main(void) {
/*	Base b(100);
	Derived* pd = static_cast<Derived*>(&b);
	pd -> show();
	pd = NULL;
	pd -> foo(); // 调用函数 不涉及成员变量
	*/
	((Derived*)(0)) -> foo();
	return 0;
}
