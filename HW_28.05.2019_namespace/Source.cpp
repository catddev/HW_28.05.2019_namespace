#include"Circle.h"
#include"Complex.h"
#include"Fraction.h"
#include"Rectangle.h"

int main() {

	SHAPES::Circle c(0, 0, 7);
	SHAPES::Circle c2(5, 4, 10);

	SHAPES::Rectangle r(2, 2, 4, 8);
	SHAPES::Rectangle r2(3, 2, 6, 12);
	SHAPES::Rectangle r3 = r;

	NUMBER_TYPE::Fraction f(3, 4);
	NUMBER_TYPE::Fraction f2 = f;
	NUMBER_TYPE::Fraction f3(1, 2);

	try {
		NUMBER_TYPE::Fraction f4(1, 0);//exception
	}
	catch (const char* c) {
		cout << c << endl << endl;
	}

	NUMBER_TYPE::Complex x(5, 3);
	NUMBER_TYPE::Complex y(1, 2);
	NUMBER_TYPE::Complex z = x;

	//1
	cout << "Circles" << endl;
	cout << (c == c2) << endl;
	cout << (c2 > c) << endl;
	(c += 100).print();
	(c2 -= 8).print();
	cout << endl;

	//2
	cout <<"Rectangles" << endl;
	cout << (r == r3) << endl;
	cout << (r == r2) << endl;
	cout << (r2 > r) << endl;
	(r += 100).print();
	(r2 -= 3).print();
	cout << endl;

	//3
	cout << "Fractions" << endl;
	cout << (f == f2) << endl;
	(f3 + f).print();
	(f3 - f).print();
	(f3 * f).print();
	(f / f3).print();
	cout << endl;

	//4
	cout << "Complex numbers" << endl;
	cout << (x == z) << endl;
	(x + y).print();
	(x - y).print();
	(x*y).print();
	(x / y).print();
	cout << endl;

	system("pause");
	return 0;
}