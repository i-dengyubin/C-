#include <iostream>
#include <cstdio>
#include <csetjmp>
using namespace std;

jmp_buf  g_env;
void func1() {
	longjmp(g_env, -1);
}
int main(void) {
		if(setjmp(g_env) == -1)
		{
				cout << "open file fail" << endl;
				return -1;
		}
		func1();
	return 0;
}
