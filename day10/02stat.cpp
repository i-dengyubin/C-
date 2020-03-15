#include <iostream>
#include <fstream>
using namespace std;

int main(void) {
	ifstream ifs("none.txt");
	if(!ifs)
	{
			cout << "open fail" << endl;
			cout << boolalpha;
			cout << ifs.good() << endl;
			cout << ifs.fail() << endl;
			return -1;
	}
	cout << "open sucess" << endl;
	int i;
	ifs >> i;
	if(!(ifs >> i)) {
			cout << "read fail" << endl;
			if(ifs.eof())
					cout << "read to the end" << endl;
			if(ifs.bad())
					cout << "read fail" << endl;
	}
	ifs.clear();
	//ifs.seekg();
	return 0;
}
