#include"Rectangle.h"

Rectangle::Rectangle(double width, double height) {
	this -> width = width;
	this-> height = height;
}
void Rectangle::setWidth(double width) {
	this->width = width;
}
void Rectangle::setHeight(double height) {
	this->height = height;
}
double Rectangle::getArea() {
	return width * height;
}

void Rectangle::swapByReference(Rectangle &r2) {
	Rectangle temp = r2;
	r2.width = width;
	r2.height = height;
	width = temp.width;
	height = temp.height;
}
void Rectangle::swapByPointer(Rectangle *r2) {
	Rectangle temp = (*r2);
	(*r2).width = this->width;
	(*r2).height = this->height;
	this->width = temp.width;
	this->height = temp.height;
}