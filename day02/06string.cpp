#include <iostream>

using namespace std;

int main(void)
{
		char s[6] = "Hello";
		string s1 = "Hello";
		s1 += "world";
		string s2 = s1;
		cout << s << endl;
		cout << s1 << endl; 
		cout << s2 << endl;

		string s3 = "1234ABCD";
		swap(s3, s2);
		cout << s2 << endl;
		cout << s2[0] << s2[4] << endl;
		cout << s2.c_str() << endl;
		return 0;
}
