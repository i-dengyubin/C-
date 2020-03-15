#include <iostream>

using namespace std;

class Date{
private:
		int m_year;
		int m_month;
		int m_day;
public:
		Date(int year, int month, int day) : m_year(year), m_month(month), m_day(day){}
		void who(){
			cout << m_year << "-" << m_month << "-" << m_day << endl;
		}
};
class Student{
private:
		string m_name;
		int m_age;
		int m_arr[3];
		struct {
			int year;
			int month;
			int day;	
		} m_birthday;
		Date m_date;
public:
	Student(const string& name = "", int age = 0, int year = 2020, int month = 2, int day = 23):m_name(name),m_age(age),m_arr{1,23,34}, m_birthday{2019, 3, 4}, m_date(year,month,day)
	{
	}
	void who(void){
		cout << m_name << "," << m_age << endl;
		cout << m_arr[0] << "," << m_arr[1] << "," << m_arr[2] << endl;
		cout << m_birthday.year << "-" << m_birthday.month << "-" << m_birthday.day << endl;
	}
};
int main(void){
	Student s("zhangsan", 28);
	s.who();	
	return 0;
}
