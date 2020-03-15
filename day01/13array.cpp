// 别名
#include <iostream>
using namespace std;

int main(void)
{
	int a[]= {1,2,3,4,5};
	for(int i = 0; i < sizeof(a) / sizeof(a[0]); ++i)
	{
		if(i != 0 && a[i] & 1)	
				cout << a[i] << endl;
	}
	cout << endl;
	return 0;
}
