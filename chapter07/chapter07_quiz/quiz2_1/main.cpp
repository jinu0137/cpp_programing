#include <iostream>
using namespace std;

class Rectangle {
private:
	int width, height;
public :
	Rectangle(int w, int h) : width(w), height(h) {}

	void ShowAreaInfo() {
		cout << "����: " << width * height << endl;
	}
};

class Square : public Rectangle {
public :
	Square(int side) : Rectangle(side, side) {}
};

int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();
	

	Square sqr(7);
	sqr.ShowAreaInfo();
	return 0;
}