#include <iostream>
#include <cstdlib>
using namespace std;

class A{
private:
		int m_data;
		char m_str;
public:
		A() {
			cout << "A()" << endl;
		}
		/*
		~A() {
			cout << "~A()" << endl;
		}
		*/
	
		static void* operator new (size_t size)	 {
			cout << "A::new() size = "	 << size << endl;
			void *pv = malloc(size);
			cout << pv << endl;
			return pv;
		}

		static void operator delete(void* pv) {
			cout << "A::delete pv = "	<< pv << endl;
			free(pv);
		}

		static void* operator new[] (size_t size) {
			cout << "A::new[] size = "	 << size << endl;
			void *pv = malloc(size);
			cout << pv << endl;
			return pv;
		}

		static void operator delete[] (void* pv) {
				cout << "A::delete[] pv = " << pv << endl;
				free(pv);
		}
};

int main(void) {
	A* pa1 = new A;
	// A* pa1 = (A*)A::operator new(sizeof(A));
	// pa1->A()
	cout << "pa1 = " << pa1 << endl;
	delete pa1;
	// pa1->~A();
	// A::operator delete(pa1)
	A* pa2 = new A[3]; // 24 + 8
	// A*((A::operator new[] (sizeof(size_t)) + sizeof(A) * 3) + 1);
	cout << pa2 << endl; // 析构 前面有个长度 // 
	//cout << sizeof(size_t) << endl;
	delete []pa2;
	return 0;
}
