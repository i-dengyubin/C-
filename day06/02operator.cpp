#include <iostream>
#include <memory>
using namespace std;

class A{
private:
public:
	A(const string& str= "") : m_str(str) {
		cout << "A()" << endl;
	}
	~A(void) {
		cout << "~A()"	<< endl;
	}
	void foo(void) const {
		cout << m_str << endl;	
	}
	string m_str;
};

class PA {
private:
	A* m_pa;
	A* release(void) {
		A* pa = m_pa;	
		m_pa = NULL;
		return pa;
	}
	void reset(A* pa) {
		if(pa != m_pa)	{
			delete m_pa;
			m_pa = pa;	
		}
	}
public:
	PA(A* pa = NULL) : m_pa (pa) {}
	~PA(void) {
		if(m_pa) {
			delete m_pa;	
			m_pa = NULL;
		}
	}
	PA (PA& pa) : m_pa(pa.release()) {
	}

	PA& operator= (PA& pa) {
		if(&pa != this)	
				reset(pa.release());
		return *this;
	}

	A& operator* (void) const {
		return *m_pa;	
	}
	A* operator-> (void) const {
		return m_pa;	
	}

};

void func1(PA pa) {
	pa->foo();
}

void func2(PA pa) {
	pa->foo();
}

int main(void) {
	PA pa (new A("A object")); // 拷贝构造
	(*pa).foo(); // pa.operator*().foo()
	pa->foo(); // pa.operator->()->foo();
//	func1(pa);
//	func2(pa); 不可以跨作用域使用
	PA pb = pa; // 字节复制  拷贝构造
	auto_ptr<A> ppa(new A);
	cout << (*ppa).m_str << endl;
	ppa->foo();
	return 0;
}
