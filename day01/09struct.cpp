#include <iostream>
using namespace std;

struct Student
{
	char name[256];
	int age;
	void who(void)
	{
		cout << name << ' ' << age << endl;	
	}
};

int main(void)
{
	Student s1 = {"zhangsan" , 23}, *ps = &s1;
	cout << s1.name << " " << s1.age << endl;
	cout << ps->name << " " << ps->age << endl;
	s1.who();
	ps->who();
	Student s2 = {"lisi", 25};
	s2.who();
	return 0;
}
