#include <iostream>

using namespace std;
class Singleton {
private:
		Singleton(void){}
		Singleton(const Singleton&);
		static Singleton s_instance;
		Singleton& operator= (const Singleton& that) ;
		
public:
		static Singleton& getInstance(void) {
			return s_instance;	
		}
};

Singleton Singleton::s_instance;

int main(void){
	Singleton& s1 = Singleton::getInstance();
	Singleton& s2 = Singleton::getInstance();
	Singleton& s3 = Singleton::getInstance();
	cout << &s1 << endl;
	cout << &s2 << endl;
	cout << &s2 << endl;
	//Singleton s4;
	//Singleton s5(s1);
//	s2 = s1;
	return 0;
}
