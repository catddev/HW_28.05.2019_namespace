#pragma once
#include<iostream>
using namespace std;

//класс Circle(окружность)
//			Проверка на равенство радиусов двух окружностей(операция = = )
//			Сравнения длин двух окружностей(операция > )
//			Пропорциональное изменение размеров окружности, путем изменения ее радиуса(операция += и -= )

namespace SHAPES {
	class Circle {
	private:
		double x;
		double y;
		double R;
	public:
		Circle();
		Circle(double x, double y, double R);

		bool operator==(const Circle&obj);
		bool operator>(const Circle&obj);

		Circle operator+=(double n);
		Circle operator-=(double n);

		void print();

	};
}