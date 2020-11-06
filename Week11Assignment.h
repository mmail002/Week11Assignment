// Week11Assignment.h
//


#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::ostream;

typedef int RGB;


class Shape {


private:
	int x, y;

protected:
	RGB border;
	RGB fill;

public:
	Shape(int px, int py);
	virtual ~Shape();

	inline int getX();
	inline void setX(int px);
	inline void setY(int py);
	inline int getY();
};

class Rectangle : public Shape {

protected:
	int width;
	int length;

public:
	Rectangle(const int pwidth, const int plength, const int px, const int py);
};

class Line  {

protected:
	const Shape * fromShape;
	const Shape * toShape;

public:
	Line();

};

