#include <iostream>
using namespace std;

class Human{
public:
		Human(const string& name = "",int age = 0) : m_name(name),
		m_age(age){}
		friend ostream& operator<< (ostream& os, const Human& human){
			return os << human.m_name << " " << human.m_age << endl ;
		}
private:
		string m_name;
		int m_age;
};

class Student : public Human {
private:
		int m_no;
		string m_course;
public:
		Student(const string& name = "", int age = 0, 
						int no = 0, const string& course = "") :
				Human(name,age), m_no(no), m_course(course) {}
		friend ostream& operator<< (ostream& os,const Student& student){
			return os << (Human&)student << "," << student.m_no << " " 
					<< student.m_course << endl;
		}
};
int main(void) {
	Student s("zhangsan", 24, 1001, "c++");
	cout << s << endl;
	Human human = s; // 对象截切，慎用
	return 0;
}

