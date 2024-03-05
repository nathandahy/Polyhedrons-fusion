#include "Point.h"


Point::Point(int id, double x, double y, double z) : d_id(id), d_x(x), d_y(y), d_z(z) {}

Point::~Point() {}


int Point::getId() const { return d_id; }

double Point::getX() const { return d_x; }

double Point::getY() const { return d_y; }

double Point::getZ() const { return d_z; }


void Point::setId(int id){ d_id = id; }

void Point::setX(double x){ d_x = x; }

void Point::setY(double y){ d_y = y; }

void Point::setZ(double z){ d_z = z; }


void Point::setPoint(const Point& v){
	d_id = v.d_id;
	d_x = v.d_x;
	d_y = v.d_y;
	d_z = v.d_z;
}


bool Point::operator==(Point v)
{
	return(d_x == v.d_x && d_y == v.d_y && d_z == v.d_z);
}

bool Point::operator!=(Point v)
{
	return !(*this == v);
}
