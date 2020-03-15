#include <iostream>
using namespace std;

class Array{
public:
		int& at(size_t i){
			return m_array[i];
		}

		const int& at(size_t i) const {
			return const_cast<Array*>(this)->at(i);
		}

private:
		int m_array[100];
};
int main(void){
	Array a;
	a.at(0) = 100;
	a.at(50) = 200;
	a.at(99) = 300;
	++a.at(0);
	const Array& r = a;
	cout << r.at(0) << " " << r.at(50) << " "<< r.at(99) << endl;
		
	return 0;
}
