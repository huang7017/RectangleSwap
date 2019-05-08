#include<iostream>
#include<iomanip>
#include"Rectangle.h"

using namespace std;
void swapByReference(Rectangle &r1, Rectangle &r2) {
	Rectangle temp = r1;
	r1 = r2;
	r2 = temp;

}
void swapByPointer(Rectangle *r1, Rectangle *r2) {
	Rectangle temp = *r1;
	*r1 = *r2;
	*r2 = temp;
}
int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	Rectangle r1(a, b);
	Rectangle r2(c, d);

	cout << "SwapByReference:" <<fixed << setprecision(2)<< r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByReference(r2);
	//swapByReference(r1,r2);
	cout << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;

	cout << "SwapByPointer:" << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << " to ";
	r1.swapByPointer(&r2);
	//swapByPointer(&r1,&r2);
	cout << fixed << setprecision(2) << r1.getArea() << " " << r2.getArea() << endl;

	system("pause");
}