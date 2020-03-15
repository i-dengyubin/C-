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
}

namespace abc
{
	void save(int money)
	{
		g_balance += money;
	}
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
	return 0;
}


