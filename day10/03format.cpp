#include <iostream>
#include <cmath>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
using namespace std;


int main(void) {
		// 精度
	cout << cout.precision() << endl;
	cout << sqrt(200) << endl;
	cout << cout.precision(10) << endl; // 6
	cout << sqrt(200) << endl;
	cout.setf(ios::left);
	cout << '[';
	cout.width(10);
	cout << 123 << ']' << endl; // 一次性的
	cout << '[' << 456 << ']' << endl;
	cout.setf(ios::right, ios::adjustfield);
	cout << "[";
	cout.width(10);
	cout.fill('#');
	cout << 789 << "]"  << endl;
	cout.setf(ios::internal, ios::adjustfield);
	cout << '[';
	cout.width(10);
	cout << -123 << ']' << endl;
	cout.setf(ios::hex, ios::basefield);
	cout << 255 << endl;
	cout.setf(ios::dec, ios::basefield);
	cout.setf(ios::scientific, ios::floatfield);
	cout << 10023.2 << endl;
	cout.setf(ios::fixed, ios::floatfield);
	cout << 10023.2 << endl;
	cout.setf(ios::showpos);
	cout << 100 << endl;
	cout.setf(ios::showpoint);
	cout << 100.0 << endl;
	cout.unsetf(ios::showpos);
	cout.setf(ios::boolalpha);
	cout << (1 > 0) << endl;
	cout.setf(ios::unitbuf);
	cout << "Hello World";
	sleep(5);
	cout << endl;
	ifstream ifs("ws.txt");
	ifs.unsetf(ios::skipws);
	char c;
	while(ifs >> c) {
		cout << c;	
	}
	cout << endl;
	ifs.close();
	return 0;
}
		
