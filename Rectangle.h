#ifndef RECTANGLE_H
#define RECTANGLE_H
class Rectangle {
private:
	double width, height;
public:
	Rectangle(double = 0, double = 0);
	void setWidth(double);
	void setHeight(double);
	double getArea();
	void swapByReference(Rectangle&);
	void swapByPointer(Rectangle*);

};

#endif
