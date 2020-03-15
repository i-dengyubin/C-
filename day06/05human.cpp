#include <iostream>

using namespace std;
class Human {
protected:
		string m_name;
		int m_age;
public:
		Human(const string& name = "", int age = 0) : m_name(name), m_age(age) {}
		void who(void)  const {
			cout << m_name << " "	 << m_age << endl;
		}

		void eat(const string& food) {
			cout << "eat "<< food << endl;
		}
		void sleep(int hour) {
			cout << "sleep " <<  hour << endl;
		}
};

class Student:public Human {
private:
		int m_no;
public:
		Student(const string& name = "",int age = 0, int no = 0) {
			m_name = name;
			m_age = age;
			m_no = no;	
		}
		void learn(const string& course) {
			cout << "course" << endl;
		}
		void who(void) const {
			cout << m_name << " "	 << m_age << " " << m_no << endl;
		}
};

class Teacher: public Human{
private:
		double m_salary;
public:
		Teacher(const string& name = "", int age = 0, double salary = 0.)
		: Human(name, age), m_salary(salary)	
		{}

		void who(void) const{
			cout << m_name << " " << m_age << " " << m_salary << endl;
		}
		void teach(const string& course) {
			cout << "Teach " << course << endl;
		}
};
int main(void) {
	Student s("zhangsan", 20, 1001);
	s.who();
	s.eat("food");
	s.sleep(4);
	s.learn("c++");
	Human* pHuman = &s;
	pHuman->eat("food");
	pHuman->who();
	Student* pStudent = static_cast<Student*>(pHuman);
	pStudent->learn("Java");
	Teacher t("lisi", 23, 10002.);
	t.who();
	t.teach("java");
	return 0;
}
