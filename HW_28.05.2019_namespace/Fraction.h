#pragma once
#include<iostream>
#include<exception>
using namespace std;

//		класс Fraction(простая дробь)
//			Арифметические операции для работы с дробями(операции + , -, *, / )
//			Проверка на равенство двух дробей(операция = = )

namespace NUMBER_TYPE {

	class Fraction {
	private:
		int a;
		int b;
		int c;
	public:
		Fraction();
		Fraction(int a, int b);
		Fraction(int a, int b, int c);
		void setFraction(int a, int b, int c);
		int getA();
		int getB();
		int getC();

		Fraction operator+(Fraction obj);
		Fraction operator-(Fraction obj);
		Fraction operator*(Fraction obj);
		Fraction operator/(Fraction obj);
		Fraction operator=(Fraction obj);
		bool operator==(Fraction obj);
		Fraction reduct();
		void print();
	};
}