#include <iostream>
using namespace std;

class User{
public:
		User(const string& m_name = "", int m_age = 0)
		{
			cout << "构造函数" << this << endl;
			this->m_name = m_name;
			this->m_age = m_age;
		}
		void print(void) {
			cout << m_name << "," << m_age << endl;
		}
private:
		string m_name;
		int m_age;
};
int main(void){
	User u1("zhangsan", 18);
	User u2("lisi", 20);
	u1.print();
	u2.print();
	return 0;
}
