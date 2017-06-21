/**************************/
/* Jonah H. Largen */
/* CECS 130-01 */
/* Assignment 08 Problem 01 */
/*************************/

#include <iostream>
using namespace std;

class Vector{
private:
	double x;
	double y;
	double z;
public:
	Vector(){
		x = 0;
		y = 0;
		z = 0;
	}
	void setComponents(double x, double y, double z){
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void add(Vector v){
		this->x += v.x;
		this->y += v.y;
		this->z += v.z;
	}
	void display(){
		cout << "(" << x << ", " << y << ", " << z << ")" << endl;
	}
};

int main() {
	Vector vector1 = Vector();
	vector1.setComponents(1,3,5);
	vector1.display();
	Vector vector2 = Vector();
	vector2.setComponents(2,4,6);
	vector2.display();
	vector1.add(vector2);
	vector1.display();
	return 0;
}
