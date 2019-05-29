#pragma once
#include<iostream>
using namespace std;


//		Complex(комплексное число)
//			Арифметические операции для работы с дробями(операции + , -, *, / )
//			Проверка на равенство двух дробей(операция = = )

namespace NUMBER_TYPE {

	class Complex {
	private:
		int a;
		int b;
		int i;
	public:
		Complex();
		Complex(int a, int b);

		Complex operator+(Complex obj);
		Complex operator-(Complex obj);
		Complex operator*(Complex obj);
		Complex operator/(Complex obj);
		Complex operator=(Complex obj);
		bool operator==(Complex obj);
		void print();
};

}