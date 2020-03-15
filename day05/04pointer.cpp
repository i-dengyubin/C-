#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>

using namespace std;

class Student{
private:
public:
		Student(const string& name = "", const string& home = "") : m_name (name), m_home(home) {}
		double s;
		string m_name;
		string m_home;
		void who(void){
			cout << m_name << " " << m_home << endl;
		}
	static int s_data;
	static int add(int x, int y) {
		return x + y;	
	}
};
int Student::s_data = 0;
int main(void){
	string Student::*pname = &Student::m_name;
	string Student::*phome = &Student::m_home;
	Student s1("zhansan","beijing");
	Student s2("lisi", "shanghai");
	cout << s1.*pname << " " << s1.*phome << endl;
	cout << s2.*pname << " " << s1.*phome << endl; // .* 是一个运算符, 成员指针解引用运算符
	void* pv; // 存的是成员变量相对于起始地址的偏移
	memcpy(&pv, &pname, 4);
	cout << pv << endl;
	Student* ps2 = &s2;
	cout << ps2->*pname << endl;  // 简接成员指针解引用运算符
	void (Student::*pwho)(void) = &Student::who; // &Student::who() & 必须写
	(s2.*pwho)(); // this 指针
	(ps2->*pwho)();
	int* psdata = &Student::s_data;
	cout << *psdata<< endl;
	int(*padd) (int,int) = &Student::add;
	cout <<	padd(20,20) << endl;
	return 0;
}
