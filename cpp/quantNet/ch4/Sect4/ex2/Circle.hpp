#ifndef CIRCLE_HPP
#define CIRLCE_HPP
#include <iostream>
#include "Point.hpp"

class Circle{

	private:
		Point center;
		double m_radius; //radius value must be >0
	

	public:
		Circle();
		Circle(Point center_, double rad_);
		~Circle();
		Circle(const Circle& source);

		Circle& operator= (const Circle& source);
		// view methods
		double Diameter() const;
		double Area() const;
		double Circumference() const;
		std::string ToString() const;
		Point CentrePoint() const;
		double Radius() const;

		// modifiers
		// choosing a diameter vice rad method to take advantage of overloading. 
		void Diameter(double diam_); 
		void Radius(double rad_);
		void CentrePoint(Point center_); 

};

#endif
