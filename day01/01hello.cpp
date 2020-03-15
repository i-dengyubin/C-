#include <iostream>

int main()
{
	std::cout << "Hello C++ !" << std::endl;
	// 输出信息不再使用printf函数，
	// cout 是标准输出流对象，std是标准名字空间
	// << 是插入运算符，表示将其后面的数据插入到其前面的对象中,同时返回其前面的对象
	// 满足后面继续插入的需求
	return 0;	
}
