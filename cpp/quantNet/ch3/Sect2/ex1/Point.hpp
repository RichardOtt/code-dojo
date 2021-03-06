#ifndef POINT_HPP
#define POINT_Hpp
class Point{

	private:
		double x,y;
	
	public:	 
		//constructors
		Point();
		Point(double x_, double y_);
		
		//selectors
		double getX();
		double getY();
		std::string ToString();	
	
		//mutators
		void setX(double x_);
		void setY(double y_);

};
#endif
