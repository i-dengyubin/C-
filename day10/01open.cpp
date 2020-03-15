#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ofstream ofs("open.txt", ios::out);
	ofs.close();
	ofs.open("open.txt");
	ofs << 1234 << ' ' << 56.78 << " "<< "apple" << endl;
	ofs.close();
	ofs.open("open.txt", ios::app);
	ofs << "Hello World" << endl;
	ifstream ifs("open.txt");
	int i;
	double d;
	string s1,s2;
	ifs >> i  >> d >> s1 >> s2;
	cout << i  << " " << ' '<< d << " " << s2 << s1 << endl;
	return 0;
}
