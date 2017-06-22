/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Lab 10 Problem 01 */
/*************************/

#include <iostream>
using namespace std;

class Room{
private:
	double length;
	double width;
	double height;
public:
	Room(double myLength, double myWidth, double myHeight){
		length = myLength;
		width = myWidth;
		height = myHeight;
	}
	double getLength(){
		return length;
	}
	void setLength(double myLength) {
		if (myLength > 0) length = myLength;
		else cout << "Length must be greater than 0" << endl;
	}
	double getWidth(){
		return width;
	}
	void setWidth(double myWidth) {
		if (myWidth > 0) width = myWidth;
		else cout << "Width must be greater than 0" << endl;
	}
	double getHeight(){
		return height;
	}
	void setHeight(double myHeight) {
		if (myHeight > 0) height = myHeight;
		else cout << "Height must be greater than 0" << endl;
	}
	void setDimensions(double myLength, double myWidth, double myHeight){
		setLength(myLength);
		setWidth(myWidth);
		setHeight(myHeight);
	}
	double getVolume(){
		return length * width * height;
	}
	double getFloorArea(){
		return length * width;
	}
	double getSurfaceArea(){
		return 2 * length * width + 2 * length * height + 2 * width * height;
	}
};

int main() {
	Room playRoom = Room(10,5,8);
	playRoom.setDimensions(20,10,12);
	cout << "Floor Area: " << playRoom.getFloorArea() << " Units Squared" << endl;
	cout << "Surface Area: " << playRoom.getSurfaceArea() << " Units Squared" << endl;
	cout << "Volume: " << playRoom.getVolume() << " Units Cubed" << endl;
	return 0;
}


