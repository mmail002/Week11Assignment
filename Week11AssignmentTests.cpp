

#include <string>
#include <iostream>  //to do input & output
#include <fstream>   //to do file input & output
#include <iomanip>  // io formatting
#include <cassert>

#include "Week11Assignment.h"

using std::string;
using std::istringstream;
using std::cout;
using std::endl;

//you will have to modify the .h and .cpp for this assignment


void myFunction1() {
	Shape s(11, 22);

	//add the operator << to Shape
	// it must print "x:11 y:22" for 's'

	//uncomment the code below to run your code
	//cout << s << endl;
}

void myFunction2() {
	Rectangle r(123, 345, 11, 22);

	//add the operator << to Rectangle..a subclass of Shape !
	// it must print "x:11 y:22 w:123 l:345" for 'r'

	//uncomment the code below to run your code
	//cout << r << endl;

}

void myFunction3() {
	Rectangle r1(100, 200, 11, 22);
	Rectangle r2(500, 700, 44, 55);

	//add the operator += to Rectangle and its superclass of Shape !
	//it must add the xs, the ys and the widths and lengths

	//uncomment the code below to run your code
	// it should print "x:600 y:900 w:55 lenght:77"
	// r1 += r2;
	//cout << r1 << endl;
}

void myFunction4() {
	Shape s1(11, 22);
	Shape s2(11, 22);

	//a Line must support the operator += to add a shape as the beginning of a Line (or the end, if it is already a starting shape)
	// operator -= removes the shape fromt the Line (you must check if it is the beginning)

	Line ln();

	//uncomment the code below to run your code
	/*
	ln += s1;
	ln += s2;

	ln -= s2;
	*/
}

void myFunction5() {
	Shape s1(11, 22);
	Shape s2(11, 22);

	//you must add the operator << to Line to ouput "from: <fromShape output> to: <toShape output>"
	// <<*Shape output> is the output of Shape <<
	Line ln();

	//uncomment the code below to run your code
	/*
	ln += s1;
	ln += s2;
	cout << ln << endl;
	*/
}

int main() 
{
	cout << "Week11AssignmentTests" << endl;

	myFunction1();

	myFunction2();

	myFunction3();

	myFunction4();

	myFunction5();
}	