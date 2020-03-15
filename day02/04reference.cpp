#include <iostream>
using namespace std;
void foo(int a[3])
{
	cout << sizeof(a) / sizeof(a[0]) << endl;
}

void bar(int (&a)[3])
{
	cout << sizeof(a) / sizeof(a[0]) << endl;
}

int main(void)
{
	int a ;
	int* p = &a;
	int** pp = &p; // 有指向指针的指针
	int& r = a;
//	int&& rr = r; // 没有引用引用的引用
	int*& rp = p; // 有引用指针的引用
//	int&* pr = &r; // 没有指向引用的指针
	int x,y,z;
	int* pa[] = {&x,&y,&z}; // 有指针数组
//	int& ra[] = {x,y,z}; // 没有引用数组
	int arr[3] = {0};
	int(&ar)[3] = arr;// 有数组引用
	cout << sizeof(arr) / sizeof(arr[0]) << endl;
	foo(arr);
	int(*parr)[3] = &arr;
	cout << sizeof(p) << endl; // 8
	bar(arr);

	return 0;
}
