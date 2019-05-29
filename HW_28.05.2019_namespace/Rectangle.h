#pragma once
#include<iostream>
using namespace std;

//класс Rectangle(прямоугольник)
//			Проверка на равенство двух прямоугольников(операция = = )
//			Сравнения двух прямоугольников по площади(операция > )
//			Пропорциональное изменение размеров прямоугольника(операция += и -= )

namespace SHAPES {
	class Rectangle {
	private:
		double x;
		double y;
		double a;
		double b;
	public:
		Rectangle();
		Rectangle(double x, double y, double a, double b);

		void setA(double a);
		void setB(double b);
		double getA();
		double getB();
		void print();

		bool operator==(const Rectangle&obj);
		bool operator>(const Rectangle&obj);

		Rectangle operator+=(double n);
		Rectangle operator-=(double n);

	};




}