#include <iostream>
using namespace std;
// 模板方法模式 --> 好莱坞模式
class PDFParser {
public:
		void parse(const char* pdffile) {
			onRect();	
			onCircle();
			onText();
			onImage();
		}
private:
		virtual void onRect(void) = 0;
		virtual void onCircle(void) = 0;
		virtual void onText(void) = 0;
		virtual void onImage(void) = 0;
};

class PDFRender : public PDFParser {
private:
		void onRect() {}
		void onCircle() {}
		void onText() {}
		void onImage() {}
};
int main(void) {
	PDFRender render;
	render.parse("a.pdf");
	return 0;
}
