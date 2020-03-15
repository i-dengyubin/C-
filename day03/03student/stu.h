#ifndef __STU_H__
#define __STU_H__
#include <string>
using namespace std;

class Student
{
public:
		Student(void);
		Student(const string& name,int age,int no);
		void who(void);
		void eat(const string& food);
		void learn(const string& course);
private:
		string m_name;
		int m_age;
		int m_no;
};
#endif // __STU_H__

