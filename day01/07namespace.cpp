/*无名命名空间
 *没有在任何名字空间中：
 * */
#include <iostream>
using namespace std;
int g_data = 100;

namespace ns1
{
	int g_data = 200;
	void foo(void)
	{
		cout << ::g_data << endl;	
	}
	//int g_data = 200;
}

int main()
{
	using namespace ns1;
	foo();

	// cout << g_data << endl;  // error
	cout << ns1::g_data << endl; // 200	
	cout << ::g_data << endl; // 100
	return 0;
}
