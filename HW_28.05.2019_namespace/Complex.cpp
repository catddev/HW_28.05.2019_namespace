#include "Complex.h"

namespace NUMBER_TYPE{
NUMBER_TYPE::Complex::Complex()
{
	a = b = 0;
	i = 1;
}

NUMBER_TYPE::Complex::Complex(int a, int b)
{
	this->a = a;
	this->b = b;
	i = 1;
}

Complex NUMBER_TYPE::Complex::operator+(Complex obj)
{
	Complex tmp(0,0);
	tmp.a = a + obj.a;
	tmp.b = b + obj.b;
	tmp.i = 1;
	return tmp;
}

Complex NUMBER_TYPE::Complex::operator-(Complex obj)
{
	Complex tmp(0, 0);
	tmp.a = a - obj.a;
	tmp.b = b - obj.b;
	tmp.i = 1;
	return tmp;
}

Complex NUMBER_TYPE::Complex::operator*(Complex obj)
{
	Complex tmp;
	tmp.a = a*obj.a - b * obj.b;// минус, т.к. квадрат i = -1
	tmp.b = b * obj.a + a * obj.b;
	tmp.i = 1;
	return tmp;
}

Complex NUMBER_TYPE::Complex::operator/(Complex obj)
{
	Complex tmp(0, 0);
	tmp.a = (a *obj.a + b * obj.b) / (obj.a*obj.a + obj.b*obj.b);
	tmp.b = b * obj.a - a * obj.b;
	tmp.i = 1;
	return tmp;
}

Complex NUMBER_TYPE::Complex::operator=(Complex obj)
{
	this->a = obj.a;
	this->b = obj.b;
	this->i = 1;
	return *this;
}

bool NUMBER_TYPE::Complex::operator==(Complex obj)
{
	return (a==obj.a && b==obj.b);
}

void NUMBER_TYPE::Complex::print()
{
	if (b < 0)
		cout << a << " " << b << "i" << endl;
	else if (a == 0)
		cout << b << "i" << endl;
	else if (b == 0)
		cout << a << endl;
	else
	cout << a << " + " << b << "i" << endl;
}

}
