#include <iostream>
#include <fstream>

using namespace std;

int main(void) {
	ifstream ifs("get.txt"); // hexdump -C get.txt
/*	char c;
	while((c = ifs.get()) != EOF)
			cout << c ;
	cout << endl;
	ifs.clear();
	ifs.seekg(ios::beg);
	while(ifs.get(c))
			cout << c ;
	cout << "-----------" << endl;
	*/
	char sz[4];
	while(ifs.get(sz, sizeof(sz), '\n')) {
			cout << sz ;
			if(ifs.peek() == '\n')
					ifs.ignore();
	}
	cout << "------------" << endl;
	return 0;
}
