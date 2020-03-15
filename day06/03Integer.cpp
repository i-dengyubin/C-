#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;

class Integer{
private:
		int m_data;
public:
		Integer(int data = 0) : m_data (data) {}
		operator int(void) const {
			return m_data;	
		}

		operator int& (void) {
			return m_data;	
		}

};

class Student{
private:
		string m_name;
		int m_age;
public:
		Student(const string& name = "", int age = 0) : m_name (name), m_age(age) {}
		operator string(void) const {
			char str[128];
			sprintf(str, "%s, %d",m_name.c_str(),m_age);
			return str;
		}

};
int main(void) {
	Integer i1 = 100; // 单参构造函数
	int i2 = i1; // int 类型转换运算符
	cout << i2 << endl;
	i1 = 200; // int&(i1) = 200;
	cout << i1 << endl; // --> int
	Student s("zhangsan", 23);
	cout << (string)s << endl;
	return 0;
}
