#include <iostream>
#include "Point.hpp"
#include <string>


//constructors
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(double x_, double y_){
	x = x_;
	y = y_;
}
	
//selectors
double Point::getX(){
	return x;
}

double Point::getY(){
	return this->y;
}
	
std::string Point::ToString(){
	return ("( " + std::to_string(x) + ", " + std::to_string(y) + " )\n");
}

	//mutators
void Point::setX(double x_){
	x = x_;
}
	
void Point::setY(double y_){
	this->y = y_;
}

	

