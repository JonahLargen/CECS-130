/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 09 Problem 01 */
/*************************/

#include <iostream>
#include <cmath>
using namespace std;

class Vector{
private:
	double x;
	double y;
	double z;
public:
	Vector(double x, double y, double z){
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void display(){
		cout << "(" << x << ", " << y << ", " << z << ")";
	}
	double getLength(){
		return pow(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2), 0.5);
	}
	Vector operator+(const Vector& other){
		Vector v = Vector(this->x + other.x, this->y + other.y, this->z + other.z);
		return v;
	}
	bool operator==(Vector& other){
		if (abs(getLength() - other.getLength()) < .00000001){ // This fixes the 1.0 and 1.00 might not be the same problem.
			return true;
		}else{
			return false;
		}
	}
};

int main() {
	Vector vector1 = Vector(1,3,5);
	cout << "Vector 1: ";
	vector1.display();
	cout << ", Length: " << vector1.getLength() << endl;

	Vector vector2 = Vector(2,4,6);
	cout << "Vector 2: ";
	vector2.display();
	cout << ", Length: " << vector2.getLength() << endl;

	vector1 = vector1 + vector2;
	cout << "Vector 3: ";
	vector1.display();
	cout << ", Length: " << vector1.getLength() << endl;

	/* operator== not used in problem prompt, example code

	bool b = vector1==vector1;
	cout << b << endl; // This will print 1
	b = vector1==vector2;
	cout << b << endl; // This will print 0

	*/

	return 0;
}
