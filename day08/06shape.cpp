#include <iostream>

using namespace std;

class Shape {
protected:
		int m_x;
		int m_y;
public:
		Shape(int x, int y) : m_x(x) , m_y(y) {}
		virtual void draw(void) = 0 ;
};

class Rect : public Shape {
private:
		int m_w;
		int m_h;
public:
		Rect(int x, int y, int w, int h) : Shape(x, y), m_w(w) , m_h(h) {}
		void draw(void)  {
			cout << "Rect:"	 << m_x << "," << m_y << "," << m_w << "," << m_h << endl;
		}
};

class Circle : public Shape{
private:
	int m_r;
public:
	Circle(int x, int y, int r) : Shape(x, y), m_r(r) {}
	void draw(void) {
		cout << "Circle:"	<< m_x << "," << m_y << "," << m_r << endl;
	}
};

class Triangle : public Shape {
		
};
void render(Shape* shapes[]) {
	for(size_t i = 0; shapes[i]; ++i)
			shapes[i] -> draw();
}
int main(void) {
	Shape* shapes[256] = {NULL};
	shapes[0] = new Rect(1,2,3,4);
	shapes[1] = new Rect(5,6,7,8);
	shapes[2] = new Circle(8,9,10);
	shapes[3] = new Circle(11,12,14);
	shapes[4] = new Rect(15,16,17,18);
	render(shapes);
	//Triangle t;
	return 0;
}

