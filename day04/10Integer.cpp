#include <iostream>
using namespace std;

class Integer{
public:
		Integer(int data = 0) : m_data(new int(data)){
			cout << "Integer()"	 << endl;
		}
		~Integer(void){
			cout << "~Integer()" << endl;
			if(m_data){
				delete m_data;	
				m_data = NULL;
			}
		}
		/*
		 Integer(const Integer& that) : m_data(that.m_data){
		 }
		 * */
		Integer(const Integer& that) : m_data(new int(*that.m_data)) {
			cout << "Integer(const Integer& that)" << endl;
		}

		Integer& operator= (const Integer& that) {
/*			*m_data = *that.m_data;	
			return *this;
			*/
			if(&that != this) { // 防止旧赋值
					delete m_data; // 释放旧资源
					m_data = new int(*that.m_data); // 分配新资源 拷贝新数据
					return *this; // 返回自引用
			}
			return *this;
		}
		void set(int data) {
			*m_data = data;	
		}
		int get(void) {
			return *m_data;	
		}
private:
		int* m_data;
};


int main(void) {
	/*{
			Integer i(100);
			cout << i.get() << endl;
			i.set(20);
			cout << i.get() << endl;
	} //  大括号作用域
	*/
		/*
	Integer* i;
	{
		i = new Integer(100);
		cout << i->get() << endl;
		i->set(20);
		cout << i->get() << endl;
	}
	cout << "main()" << endl;
	delete i;
	*/

	Integer i1(100);
	Integer i2 = i1; // 对基本类型的成员变量按照字节复制
	// 浅拷贝
	i1.set(20);
	cout << i1.get() << endl;
	cout << i2.get() << endl;
	
	i2 = i1;	 // 拷贝赋值 // i2.operator=(i1)
	i1.set(20);
	cout << i1.get() << endl;
	cout << i2.get() << endl;

	int a = 10, b = 20;
	(a = b) = 30; // 赋值表达式的值是左操作数的引用
	cout << a << " " << b << endl;
	Integer i3(300);
	(i1 = i2) = i3;
	cout << i1.get() << " " << i2.get() << endl;
	return 0;
}
