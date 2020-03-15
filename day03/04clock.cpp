#include <iostream>
#include<cstdio>
#include <unistd.h>

using namespace std;

class Clock{
private:
	int m_hour;
	int m_min;
	int m_sec;
	void show(void)
	{
		printf("\r%02d:%02d:%02d",m_hour,m_min,m_sec);
		fflush(stdout);
	}
	void tick(void)
	{
		sleep(1);
		if(++m_sec == 60)
		{
			m_sec = 0;
			m_min++;
			if(++m_min == 60)	
			{
				m_min = 0;
				if(++m_hour == 24)
						m_hour = 0;
			}
		}
	}
public:
	Clock(time_t t)
	{
		tm* local = localtime(&t);
		m_hour = local->tm_hour;
		m_min = local->tm_min;
		m_sec = local->tm_sec;	
	}
	void run(void)
	{
		for(;;)
		{
			show();	
			tick();
		}
	}
	
};
int main(void)
{
	Clock clock(time(NULL))	;
	clock.run();
	return 0;
}
