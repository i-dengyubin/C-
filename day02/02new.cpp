#include<iostream>
#include<cstdlib>
#include <cstdio>

using namespace std;

int main (void)
{
	int* pi = new int;
	// int* pi = (int*)malloc(sizeof(int));
	cout << (void*)pi << endl;
	*pi = 1234;
	cout << *pi << endl;
	delete pi;
	// free(pi);
	pi = NULL;
	// delete pi; // 不会出错,表示什么都不会做
	int* pi2 = new int(100);
	cout << *pi2 << endl;
	delete pi2;
	pi2 = NULL;
	int* pi3 = new int[10];
	pi3[0] = 10;
	pi3[1] = 9;
	pi3[9] = 0;

	cout << pi3[0] << ' ' << pi3[2] << endl;
	delete[] pi3;

	int* pi4 = new int[3]{1,23,4}; // g++ 02new.cpp -std=gnu++0x
	cout << pi4[0] << ' ' << pi4[1] << ' ' << pi4[2] << endl;
	delete[] pi4;

	int (*pa)[4] = new int[3][4];
	for(int i=0; i < 3; i++)
	{
		for(int j=0; j < 4;j++)	
				cout << pa[i][j] << endl;
	}
	delete[] pa;

	char* pc = new char;
	cout << (void*)pc << endl;
	delete pc;

	char* p =(char*)malloc(10);
//	p++;	
	free(p);
	try{
		pi = new int[0xFFFFFFFF];
		cout << "test new" << endl;
	}catch(exception& ex){
		cout << ex.what() << endl;		
	}
	delete[] pi;

	int* pn = (int*) malloc(10 * sizeof(int));
	cout << (void*) pn << endl;
	pi = new (pn + 1) int ;
	cout << (void*) pi << endl;
	
	char ca[4] = {0x78,0x56,0x34,0x12};
	pi = new (ca) int;
	cout << showbase << *pi << endl;
	return 0;
}
