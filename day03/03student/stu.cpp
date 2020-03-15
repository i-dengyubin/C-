#include <iostream>
#include "stu.h"
using namespace std;

Student::Student(void)
{
	m_name = "wuming";
	m_age = 0;
	m_no = 1004;
}

Student::Student(const string& name, int age, int no)
{
	m_name = name;
	m_age = age;
	m_no = no;
}

void Student::who(void)
{
	cout << "我叫" << m_name << ", 我" << m_age << "岁" << endl;
}

void Student::eat(const string& food)
{
	cout << "我吃" << food << endl;
}

void Student::learn(const string& course)
{
	cout << "我学" << course << endl;
}
