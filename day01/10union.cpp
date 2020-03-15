#include <iostream>
using namespace std;

int main(void)
{
	union
	{
		int i;
		char c[4];
	}; // 匿名联合
	i = 0x31323334;
	for(int n = 0; n < 4; ++n)
	{
		//printf("%#x ", c[n]);
		cout << c[n] << endl;
	} // 0x78 56 34 12 --> 大端
	// printf("%p %p\n", &i, c);
	cout << endl;
	return 0;
}
