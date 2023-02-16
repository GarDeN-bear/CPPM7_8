#include "Quadrilateral.h"

Quadrilateral::Quadrilateral() {
	name = "Четырёхугольник";
	sides_count = 4;
	a = 0;
	b = 0;
	c = 0;
	A = 0;
	B = 0;
	C = 0;
}
Quadrilateral::Quadrilateral(double a_, double b_, double c_, double d_, double A_, double B_, double C_, double D_) {
	name = "Четырёхугольник";
	sides_count = 4;
	a = a_;
	b = b_;
	c = c_;
	d = d_;
	A = A_;
	B = B_;
	C = C_;
	D = D_;
	if (A + B + C + D != 360) {
		throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 360\n");
	}
}
void Quadrilateral::get_info() {
	std::cout << name << ":\n";
	std::cout << "Стороны: " << "a=" << a
		<< " b=" << b << " c=" << c << " d=" << d << "\n";
	std::cout << "Углы: " << "A=" << A
		<< " B=" << B << " C=" << C << " D=" << D << "\n";
	std::cout << std::endl;
}

void Quadrilateral::print_info() {
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
bool Quadrilateral::check() {
	if (A + B + C + D == 360) {
		return 1;
	}
	else {
		return 0;
	}
}

Rectangle::Rectangle(double a_, double b_) {
	name = "Прямоугольник";
	a = a_;
	b = b_;
	c = a;
	d = b;
	A = 90;
	B = A;
	C = A;
	D = A;
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		throw FigureException("Ошибка создания фигуры. Причина: один из углов не равен 90 градусов\n");
	}
	if (a != c || b != d ) {
		throw FigureException("Ошибка создания фигуры. Причина: стороны a, c и b, d попарно не равны\n");
	}
	if (a == b) {
		throw FigureException("Ошибка создания фигуры. Причина: стороны a, c, b, d попарно равны, это не прямоугольник\n");
	}
}

Square::Square(double a_) {
	name = "Квадрат";
	a = a_;
	b = a;
	c = a;
	d = a;
	A = 90;
	B = A;
	C = A;
	D = A;
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		throw FigureException("Ошибка создания фигуры. Причина: один из углов не равен 90 градусов\n");
	}
}

Parallelogram::Parallelogram(double a_, double b_, double A_, double B_) {
	name = "Параллелограмм";
	a = a_;
	b = b_;
	c = a;
	d = b;
	A = A_;
	B = B_;
	C = A;
	D = B;
	if (a != c || b != d) {
		throw FigureException("Ошибка создания фигуры. Причина: стороны a, c и b, d попарно не равны\n");
	}
	if (a == b) {
		throw FigureException("Ошибка создания фигуры. Причина: стороны a, c, b, d равны, это не параллелограмм\n");
	}
	if (A != C || B != D) {
		throw FigureException("Ошибка создания фигуры. Причина: углы A, C и B, D попарно не равны\n");
	}
	if (A == 90 && C == 90 && B == 90 && D == 90) {
		throw FigureException("Ошибка создания фигуры. Причина: углы A, C, B, D равны 90, это не параллелограмм\n");
	}
	if (A + C + B + D != 360) {
		throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 360\n");
	}
}

Rhombus::Rhombus(double a_, double A_, double B_) {
	name = "Ромб";
	a = a_;
	b = a;
	c = a;
	d = a;
	A = A_;
	B = B_;
	C = A;
	D = B;
	if (a != b || a != c || a != d) {
		throw FigureException("Ошибка создания фигуры. Причина: стороны a, c, b, d не равны\n");
	}
	if (A != C || B != D) {
		throw FigureException("Ошибка создания фигуры. Причина: углы A, C и B, D попарно не равны\n");
	}
	if (A == 90 && C == 90 && B == 90 && D == 90) {
		throw FigureException("Ошибка создания фигуры. Причина: углы A, C, B, D равны 90, это не ромб\n");
	}
	if (A + C + B + D != 360) {
		throw FigureException("Ошибка создания фигуры. Причина: сумма углов не равна 360\n");
	}
}