#include <iostream>
using namespace std;

class Phone {
private:
		string m_number;
public:
		Phone(const string& number) : m_number(number) {}
		void call(const string& number) {
			cout << m_number << " call " << number << endl;
		}
};

class Player {
private:
		string m_media;
public:
		Player(const string& media) : m_media(media) {}
		void play(const string& clip)  {
			cout << m_media << " play "	 << clip << endl;
		}

};

class Computer {
private:
		string m_os;
public:
		Computer(const string& os) : m_os(os) {}
		void run(const string& app) {
			cout << m_os << " run "	 << app << endl;
		}
};

class SmartPhone : public Phone,public Player, public Computer {
public:
		SmartPhone(const string& number, const string& media, const string& os):Phone(number), Player(media), Computer(os){}
};
int main(void) {
	SmartPhone sp("13913029172", "MP3", "IOS");
	sp.call("110");
	sp.play("mp");
	sp.run("gcc");
	SmartPhone* p1 = &sp;
	Phone* p2 = p1;	
	Player* p3 = p1;
	Computer* p4 = p1;
	cout << p1 << " "<< p2 << " " << p3 << " " << p4 << endl;
	SmartPhone* p5 = static_cast<SmartPhone*> p1;
	cout << p5 << endl;
	Computer* p6 = reinterpret_cast<Computer*>p1;
	cout << p6 << endl;
	return 0;
}
