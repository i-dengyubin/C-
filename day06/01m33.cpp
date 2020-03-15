#include <iostream>
#include <iomanip>

using namespace std;
class M33{
private:
		int m_a[3][3];
public:
		M33(void) {
			for(size_t i = 0;i < 3;i++) {
				for(size_t j = 0;j < 3; ++j)
					m_a[i][j] = 0;
			}
		}
		M33(int a[][3]) {
			for(size_t i = 0;i < 3;i++) {
				for(size_t j = 0;j < 3; ++j)
					m_a[i][j] = a[i][j];
		}
		}
		const M33 operator+ (const M33& m) const {
			int a[3][3];
			for(int i =0;i < 3; ++i) {
				for(int j=0; j < 3; ++j)	
						a[i][j] = m_a[i][j] + m.m_a[i][j];
			}

			return a;
		}
		const M33 operator- (const M33& m) const {
			int a[3][3];
			for(int i =0;i < 3; ++i) {
				for(int j=0; j < 3; ++j)	
						a[i][j] = m_a[i][j] - m.m_a[i][j];
			}
			return a;
		}
		M33& operator+= (const M33& m)  {
			return *this = *this + m;	
		}
		const M33 operator* (const M33& m) {
			int a[3][3] = {0};
			for(int i =0;i < 3; ++i) {
				for(int j=0; j < 3; ++j)	
					for(int k=0; k < 3; k++)
						a[i][j] += m_a[i][k] * m.m_a[k][j];
			}
			return a;	
		}
		M33& operator-= (const M33& m) {
			return *this = *this - m;	
		}
		M33& operator*= (const M33& m) {
			return *this = *this * m;	
		}
		const M33 operator- (void) const {
			return M33() - *this;		
		}
		M33& operator++ (void) {
			for(int i =0;i < 3; ++i) {
				for(int j=0; j < 3; ++j)	
					++m_a[i][j];
			}
			return *this;
		}
		M33& operator-- (void) {
			for(int i =0;i < 3; ++i) {
				for(int j=0; j < 3; ++j)	
					++m_a[i][j];
			}
			return *this;
		}
		const M33 operator++ (int) {
			M33 m = *this;
			++*this;
			return m;
		}
		const M33 operator-- (int) {
			M33 m = *this;
			--*this;
			return m;
		}
		int* operator[] (size_t i) {
			return m_a[i];
		}
		const int* operator[] (size_t i) const {
			return const_cast<M33&> (*this)	[i];
		}
		friend ostream& operator<< (ostream& os, const M33& m) {
			for(int i =0;i < 3; ++i) {
				for(int j=0; j < 3; ++j)	
					os << setw(4) << m.m_a[i][j] ;
				os << endl;
			}
			return os;
		}
};
int main(void) {
	int a1[3][3] = {1,2,3,4,5,6,7,8,9};
	M33 m1(a1);
	int a2[3][3] = {9,8,7,6,5,4,3,2,1};
	M33 m2(a2);
	cout << m1 + m2 << endl;
	cout << m1 * m2 << endl;
	cout << ++m1 << endl;
	cout << m2-- << endl;
	return 0;
}
