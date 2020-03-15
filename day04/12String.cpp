#include <iostream>
#include <cstring>

using namespace std;

class String{
private:
	char* m_str;	
public:
	String(const char* str = NULL) : m_str(strcpy(new char[strlen(str ? str:"")],
									str ? str : "")) {
	}
	~String(void) {
		if(m_str) {
			delete[] m_str;	
			m_str = NULL;
		}
	}
	String(const String& that) :
		m_str(strcpy(new char[strlen(that.m_str) + 1], that.m_str))	
	{}
	String& operator= (const String& that) {
			/*
		if(&that != this){
			delete[] m_str;	
			m_str = new char[strlen(that.m_str) + 1];
			strcpy(m_str,that.m_str);
		}
		*/
			/*
		if(&that != this) {
			char* str = new char[strlen(that.m_str) + 1];
			delete[] m_str;
			m_str = strcpy(str, that.m_str);
		}
		*/
		if(&that != this) {
			String temp(that);
			swap(m_str,temp.m_str);
		}
		return *this;
	}
	const char* c_str(void) const{
		return m_str;	
	}

};
int main(void){
	String s1 = "Hello world";
	String s2 = s1;
	cout << s1.c_str() << endl;
	cout << s2.c_str() << endl;

	cout << s1.c_str() << endl;
	return 0;
}
