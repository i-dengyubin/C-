#include <iostream>

namespace icbc
{
	int g_balance = 0;

	void save(int money)
	{
		g_balance += money;
	}

	void draw(int money)
	{
		g_balance -= money;
	}
}
namespace abc
{
	int g_balance = 0;


	void draw(int money);
	void show();
}

namespace abc
{
	void save(int money)
	{
		g_balance += money;
	}
}

void abc::show()
{
	std::cout << "农行余额：" << g_balance << std::endl;
}

void abc::draw(int money)
{
	g_balance -= money;
}

int main()
{
	icbc::save(10000);
	icbc::draw(4000);
	std::cout << "工行余额: " << icbc::g_balance << std::endl;
	abc::save(8000);
	abc::draw(5000);
	std::cout << "农行余额: " << abc::g_balance << std::endl;
	//using namespace abc; // 名字空间指令
	using abc::show; // 名字空间声明
	// using namespace icbc; // 使draw()发生歧义
	abc::draw(2000);
	show();
	return 0;
}


