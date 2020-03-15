#include <iostream>
#include <pthread.h>

using namespace std;
class Singleton {
private:
		Singleton(void){}
		Singleton(const Singleton&);
		static Singleton* s_instance;
		static size_t s_cnt;
		static pthread_mutex_t s_mutex;
		Singleton& operator= (const Singleton& that) ;
		~Singleton(void) {
			cout << "~Singleton()" << endl;
			s_instance = NULL;
		}
		
public:
		static Singleton& getInstance(void) {
			if(! s_instance){
					pthread_mutex_lock(&s_mutex);
					if(! s_instance)
							s_instance = new Singleton;
					pthread_mutex_unlock(&s_mutex);
			}
			++s_cnt;
			return *s_instance; 	
		}
		void releaseInstance(void) {
			if(s_cnt && --s_cnt == 0) {
				pthread_mutex_lock(&s_mutex);
				delete s_instance;	
				pthread_mutex_unlock(&s_mutex);
			}
		}
};

Singleton* Singleton::s_instance = NULL;
size_t Singleton::s_cnt = 0;
pthread_mutex_t Singleton::s_mutex = PTHREAD_MUTEX_INITIALIZER;

int main(void){
	Singleton& s1 = Singleton::getInstance();
	Singleton& s2 = Singleton::getInstance();
	Singleton& s3 = Singleton::getInstance();
	cout << &s1 << endl;
	cout << &s2 << endl;
	cout << &s2 << endl;
	//Singleton s4;
	//Singleton s5(s1);
//	s2 = s1;
	s1.releaseInstance();
	s2.releaseInstance();
	s3.releaseInstance();
	return 0;
}
