#include <iostream>
using namespace std;

class Student;
class Teacher {
public:
		void educate(Student* stu);
		void reply(const string& answer) {
			m_answer = answer;	
		}
private:
		string answer;
};

class Student{
	void 
};
