#include "Circle.h"

SHAPES::Circle::Circle()
{
	x = 0;
	y = 0;
	R = 0;
}

SHAPES::Circle::Circle(double x, double y, double R)
{
	this->x = x;
	this->y = y;
	this->R = R;
}

bool SHAPES::Circle::operator==(const Circle & obj)
{
	return (this->R == obj.R);
}

bool SHAPES::Circle::operator>(const Circle & obj)
{
	return (this->R > obj.R);
}

namespace SHAPES {
	Circle SHAPES::Circle::operator+=(double n)
	{
		this->R += n;
		return *this;
	}

	Circle SHAPES::Circle::operator-=(double n)
	{
		this->R -= n;
		return *this;
	}
	void Circle::print()
	{
		cout << "(" << x << "; " << y << "; " << R << ")" << endl;
	}
}
