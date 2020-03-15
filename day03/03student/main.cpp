#include "stu.h"
#include <iostream>
using namespace std;

int main(void)
{
	Student s("zhangsan", 18, 1002);
	s.who();
	s.learn("c++");
	s.eat("food");
	Student s2;
	s2.who();
	Student sa[4];
	sa[1].who();
	sa[3].who();
	Student sa2[3] = {
		Student("lisi", 23, 1004),
		Student("zhanwu", 45, 1006)
	};
	sa2[1].who();
	cout << sizeof(s) << endl;
	Student* ps1 = new Student();
	ps1->who();
	delete ps1;
	ps1 = new Student[5];
	ps1[0].who();
	ps1[4].who();
	delete[] ps1;
	ps1 = new Student[3] {
			Student("zhangsan" , 20, 1007),
			Student("sili",28 ,1009)
	};
	return 0;
}


