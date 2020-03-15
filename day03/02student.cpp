#include <iostream>
using namespace std;

class Student
{
private:	
				string m_name;
				int m_age;
				int m_no;
public:
				void setName(const string& name)
				{
					m_name = name;		
				}
				void setAge(int age){
					if(age < 0)	
							cout << "error age" << endl;
					m_age = age;
				}

				void setNo(int no){
					if(no < 1000)	
							cout << "eroor no" << endl;
					m_no = no;	
				}

				void eat(const string& food)
				{
						cout << "我吃" << food << endl;
				}

				void learn(const string& course)
				{
						cout << "我学"	<< course << endl;
				}

				void who(void)
				{
						cout << "我叫"	 << m_name << ", 今年" << m_age << "岁" << endl;
				}
};

int main(void)
{
		// 类缺省为私有 结构体缺省为公有
		Student s;
		s.setAge(18);
		s.setName("Zhangsan");
		s.setNo(1001);
		s.who();	
		s.eat("food");
		s.learn("English");
		Student s1("lisi", 33, 1002);
		s1.who();
		return 0;
}
