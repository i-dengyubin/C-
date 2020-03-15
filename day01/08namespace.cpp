// 名字空间的嵌套
#include <iostream>
using namespace std;

namespace school
{
	namespace Class
	{
		int g_data = 100;	
	}
}

int main(void){
	cout << school::Class::g_data << endl;
	namespace ns = school::Class;
	cout << ns::g_data << endl;
	return 0;
}
