#include <iostream>

using namespace std;

class A{
private:
		int& m_r;
		const int m_c;
public:
		A(void) : m_r(*new int(100)) , m_c(200){
	//		m_r = *new int(100)	;
	//		m_c = 200;
		}
};
int main(void){
	A a;	

	return 0;
}
