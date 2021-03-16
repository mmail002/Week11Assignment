// Week11Assignment.cpp : Defines the entry point for the console application.
//
// demo for the class


#include <iostream>
#include <string>

#include "Week11Assignment.h"

Shape::Shape(int px, int py) {
		x = px;
		y = py;
}

Shape::~Shape() {

}

int Shape::getX() { return x; }
void Shape::setX(int px) {
	x = px;
}
void Shape::setY(int py) {
	y = py;
}
int Shape::getY() { return y; }

Rectangle::Rectangle(const int pwidth, const int plength, const int px, const int py) : Shape(px, py) {
	width = pwidth;
	length = plength;

}

Line::Line() : fromShape(nullptr), toShape( nullptr ) {

}
