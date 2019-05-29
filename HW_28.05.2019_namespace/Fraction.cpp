#include "Fraction.h"
namespace NUMBER_TYPE {


	NUMBER_TYPE::Fraction::Fraction()
	{
		a = 0;
		b = 1;//exception!!!!!
		c = 0;
	}

	NUMBER_TYPE::Fraction::Fraction(int a, int b)
	{
		this->a = a;
		this->b = b;
		this->c = 0;
		if (b == 0) throw "devision by zero!";
		
	}

	NUMBER_TYPE::Fraction::Fraction(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	void NUMBER_TYPE::Fraction::setFraction(int a, int b, int c)
	{
		this->a = a;
		this->b = b;
		this->c = c;
	}

	int NUMBER_TYPE::Fraction::getA()
	{
		return a;
	}

	int NUMBER_TYPE::Fraction::getB()
	{
		return b;
	}

	int NUMBER_TYPE::Fraction::getC()
	{
		return c;
	}

	Fraction NUMBER_TYPE::Fraction::operator+(Fraction obj)
	{
		Fraction tmp(*this);
		if (b == obj.b) {
			tmp.b = b;
			tmp.a = a + obj.a;
		}
		else if (b%obj.b == 0 || obj.b%b == 0) {
			tmp.b = b > obj.b ? b : obj.b;
			tmp.a = b > obj.b ? (a + obj.a*b / obj.b) : (a*obj.b / b + obj.a);
		}
		else {
			tmp.b = b * obj.b;
			tmp.a = a * obj.b + obj.a*b;
		}
		tmp.reduct();
		return tmp;
	}

	Fraction NUMBER_TYPE::Fraction::operator-(Fraction obj)
	{
		Fraction tmp(*this);
		if (b == obj.b) {
			tmp.b = b;
			tmp.a = a - obj.a;
		}
		else if (b%obj.b == 0 || obj.b%b == 0) {
			tmp.b = b > obj.b ? b : obj.b;
			tmp.a = b > obj.b ? (a - obj.a*b / obj.b) : (a*obj.b / b - obj.a);
		}
		else {
			tmp.b = b * obj.b;
			tmp.a = a * obj.b - obj.a*b;
		}
		tmp.reduct();
		return tmp;
	}

	Fraction NUMBER_TYPE::Fraction::operator*(Fraction obj)
	{
		Fraction tmp(*this);
		tmp.b = b * obj.b;
		tmp.a = a * obj.a;

		tmp.reduct();
		return tmp;
	}

	Fraction NUMBER_TYPE::Fraction::operator/(Fraction obj)
	{
		Fraction tmp(*this);
		tmp.a = a * obj.b;
		tmp.b = b * obj.a;

		tmp.reduct();
		return tmp;
	}

	Fraction NUMBER_TYPE::Fraction::operator=(Fraction obj)
	{
		this->a = obj.a;
		this->b = obj.b;
		return *this;
	}

	bool NUMBER_TYPE::Fraction::operator==(Fraction obj)
	{
		return((a / b) == (obj.a / obj.b));
	}

	Fraction NUMBER_TYPE::Fraction::reduct()
	{
		if (a % b == 0) {
			c = a / b;
			a = b = 0;
			return *this;
		}
		int nod = 1;
		int k = a < b ? a : b;
		for (int i = k; i > 0; i--) {
			if (a % i == 0 && b % i == 0) {
				nod = i;
				break;
			}
		}
		a /= nod;
		b /= nod;
	
		return *this;
	}

	void NUMBER_TYPE::Fraction::print()
	{
		if (c != 0) {
			cout << c << endl;
		}
		else cout << a << "/" << b << endl;
	}


}