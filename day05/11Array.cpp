#include <iostream>
using namespace std;

class Array{
private:
		int* m_data;
		size_t m_size;
public:
		Array(size_t size) : m_data (new int[size]), m_size(size) {}
		~Array() {
			if(m_data)	{
				delete[] m_data;
				m_data = NULL;	
			}
		}

		int& operator[] (size_t i) {
			return m_data[i];
		}

		const int& operator[] (size_t i) const {
				return const_cast<Array&>(*this)[i];
		}
};
int main(void) {
	Array a(10)	;
	a[0] = 213;
	a[1] = 45;
	a[2] = 58;
	cout << a[0]  << " "<< a[2] << " "<< a[1] << endl;
	const Array& r = a;
	cout << r[0] << endl;
//	r[0]++;
	return 0;
}
