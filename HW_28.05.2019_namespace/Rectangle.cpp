#include "Rectangle.h"

namespace SHAPES {
	SHAPES::Rectangle::Rectangle()
	{
		x = 0;
		y = 0;
		a = 0;
		b = 0;
	}

	SHAPES::Rectangle::Rectangle(double x, double y, double a, double b)
	{
		this->x = x;
		this->y = y;
		this->a = a;
		this->b = b;
	}

	void SHAPES::Rectangle::setA(double a)
	{
		this->a = a;
	}

	void SHAPES::Rectangle::setB(double b)
	{
		this->b = b;
	}

	double SHAPES::Rectangle::getA()
	{
		return a;
	}

	double SHAPES::Rectangle::getB()
	{
		return b;
	}

	void SHAPES::Rectangle::print()
	{
		cout << "(" << x << "; " << y << ";) " << "[" << a << ", " << b << "]" << endl;
	}

	bool SHAPES::Rectangle::operator==(const Rectangle & obj)
	{
		return (a == obj.a && b == obj.b);
	}

	bool SHAPES::Rectangle::operator>(const Rectangle & obj)
	{
		return (a*b > obj.a*obj.b);

	}

	Rectangle SHAPES::Rectangle::operator+=(double n)
	{
		this->a += n;
		this->b += n;
		return *this;
	}

	Rectangle SHAPES::Rectangle::operator-=(double n)
	{
		this->a -= n;
		this->b -= n;
		return *this;
	}
}