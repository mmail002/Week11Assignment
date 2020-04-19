// Week11Assignment.cpp : Defines the entry point for the console application.
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
	Shape(int px, int py) {
		x = px;
		y = py;
	}

	virtual ~Shape() {

	}

	inline int getX() { return x; }
	inline void setX(int px) {
		x = px;
	}
	inline void setY(int py) {
		y = py;
	}
	inline int getY() { return y; }

};

class Rectangle : public Shape {

protected:
	int width;
	int length;

public:
	Rectangle(const int pwidth, const int plength, const int px, const int py) : Shape(px, py) {
		width = pwidth;
		length = plength;

	}

};

//a segment must support the operator += to add a shape as the beginning of a segment (or the end, if it is already a starting shape)
// operator -= removes the segment
class Segment  {

protected:
	const Shape * fromShape;
	const Shape * toShape;

public:
	Segment() : fromShape(nullptr), toShape( nullptr ) {
	}
};

int main(int argc, char *argv[])
{
	Rectangle  rec1(1, 2, 3, 4);

	//cout << rec1;

	Rectangle rec2(1, 2, 6, 8);

    Segment s1;
	
	s1 += &rec1;
	s1 += &rec2;
	
	s1 -= &rec1; 
	
	return 0;

}


