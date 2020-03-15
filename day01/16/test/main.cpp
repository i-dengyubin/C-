#include <iostream>
using namespace std;

void foo(void){}
void foo(int i){}
extern "C" 
{
		void foo(int i, double f)
		{
			cout << "foo(int ,double)" << i << " " << f << endl;
		}
}
