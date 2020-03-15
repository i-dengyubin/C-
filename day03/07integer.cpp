#include <iostream>
using namespace std;

class Integer{
public:
		// 缺省构造函数
		Integer(void){
			m_data = 0;	
		}
		// 类型转换构造函数(单参构造函数)
		explicit Integer(int data){
			m_data = data;	
		}

		/* // 拷贝构造函数
		Integer(const Integer& that){
			m_data = that.m_data;	
		}
*/
		Integer(const Integer& that){
			m_data = that.m_data;	
		}

		void set(int data){
			m_data = data;	
		}
		int get(void){
			return m_data;	
		}
private:
		int m_data;

};
int main(void)
{
	Integer i;
	cout << i.get() << endl;
//	i = 100;
	i = static_cast<Integer>(100);
	cout << i.get() << endl;
	Integer j(i);
	cout << j.get() << endl;
	return 0;
}
