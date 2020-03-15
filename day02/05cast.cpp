#include <iostream>
using namespace std;

int main(void)
{
	int *pi = NULL;
	//char c = int(pi);
	// 静态类型转换 从一个方向可以做隐士类型转换 
	void* pv = pi;
	pi = static_cast<int*>(pv);
	// 常类型转换
	const volatile int ci = 100;
	int* pci = const_cast<int*>(&ci);
	*pci = 200;		
	cout << *pci << " " << ci << endl; // 
	cout << pci << ' ' << (void*)&ci << endl;
	// reinterpret_cast 重解释类型转换
	double* d = reinterpret_cast<double*>(pi);

	char text[] = "0001\00012345678\000000000";
	struct T{
		char type[5];
		char acc[9];
		char passwd[7];
	};
	T* pt = reinterpret_cast<T*>(text);
	cout << pt->type << endl;
	cout << pt->acc << endl;
	cout << pt->passwd << endl;

	return 0;
}
