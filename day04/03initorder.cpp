#include <iostream>
#include <cstring>

using namespace std;

class Dummy{
public:
		Dummy(const char* psz) : m_str (psz ? psz : ""), m_len(strlen(psz ? psz : "")){}
		size_t m_len; // 减少耦合
		string m_str;
	//	size_t m_len;
};
int main(void){
	Dummy dummy("ABCDEF");	
	cout << dummy.m_len << " " << dummy.m_str << endl;
	return 0;
}
