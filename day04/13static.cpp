#include <iostream>

using namespace std;

class A {
public:
		int m_data;
		static int s_data;
		static void print(){
			cout << s_data << endl;	
		}
};

int A::s_data = 5;

int main(void){
		cout << sizeof(A) << endl; // 对象的大小,不包含static
		cout << A::s_data << endl;
		A a;
		cout << a.s_data << endl;
		A b;
		b.s_data = 10;
		cout << a.s_data << endl;
		A::print();
		return 0;
}
