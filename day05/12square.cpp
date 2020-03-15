#include <iostream>
using namespace std;

class Square {
private:

public:
		double operator() (double x) const {
			return x * x ;	
		}
		int operator()(int a, int b ,int c = 9) const {
			return a + b - c;	
		}
};
int main(void) {
	Square s;
	cout << s(13.) << endl; // s.operator()(13.0)
	cout << s(10,20) << endl;
	cout << s(10,20,30) << endl;
	return 0;
}
