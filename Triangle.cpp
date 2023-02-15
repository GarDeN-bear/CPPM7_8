#include "Triangle.h"

Triangle::Triangle() {
	name = "Треугольник";
	sides_count = 3;
	a = 0;
	b = 0;
	c = 0;
	A = 0;
	B = 0;
	C = 0;
}

Triangle::Triangle(double a_, double b_, double c_, double A_, double B_, double C_) {
	name = "Треугольник";
	sides_count = 3;
	a = a_;
	b = b_;
	c = c_;
	A = A_;
	B = B_;
	C = C_;
}

void Triangle::get_info() {
	std::cout << name << ":\n";
	std::cout << "Стороны: " << "a=" << a
		<< " b=" << b << " c=" << c << "\n";
	std::cout << "Углы: " << "A=" << A
		<< " B=" << B << " C=" << C << "\n";
	std::cout << std::endl;
}

void Triangle::print_info() {
	std::cout << name << ":\n";
	if (check() == true) {
		std::cout << "Правильная" << "\n";
	}
	else {
		std::cout << "Неправильная" << "\n";
	}
	std::cout << "Количество сторон: " << sides_count << "\n";
	get_info();
}

bool Triangle::check() {
	if (A + B + C == 180) {
		return 1;
	}
	else {
		return 0;
	}
}

RightTriangle::RightTriangle(double a_, double b_, double c_, double A_, double B_) {
	name = "Прямоугольный треугольник";
	a = a_;
	b = b_;
	c = c_;
	A = A_;
	B = B_;
	C = 90;
}

IsoscelesTriangle::IsoscelesTriangle(double a_, double b_, double A_, double B_) {
	name = "Равнобедренный треугольник";
	a = a_;
	b = b_;
	c = a;
	A = A_;
	B = B_;
	C = A;
}

EquilateralTriangle::EquilateralTriangle(double a_, double A_) {
	name = "Равносторонний треугольник";
	a = a_;
	b = a;
	c = a;
	A = A_;
	B = A;
	C = A;
}