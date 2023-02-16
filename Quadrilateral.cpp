#include "Quadrilateral.h"

Quadrilateral::Quadrilateral() {
	name = "��������������";
	sides_count = 4;
	a = 0;
	b = 0;
	c = 0;
	A = 0;
	B = 0;
	C = 0;
}
Quadrilateral::Quadrilateral(double a_, double b_, double c_, double d_, double A_, double B_, double C_, double D_) {
	name = "��������������";
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
		throw FigureException("������ �������� ������. �������: ����� ����� �� ����� 360\n");
	}
}
void Quadrilateral::get_info() {
	std::cout << name << ":\n";
	std::cout << "�������: " << "a=" << a
		<< " b=" << b << " c=" << c << " d=" << d << "\n";
	std::cout << "����: " << "A=" << A
		<< " B=" << B << " C=" << C << " D=" << D << "\n";
	std::cout << std::endl;
}

void Quadrilateral::print_info() {
	std::cout << name << ":\n";
	if (check() == true) {
		std::cout << "����������" << "\n";
	}
	else {
		std::cout << "������������" << "\n";
	}
	std::cout << "���������� ������: " << sides_count << "\n";
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
	name = "�������������";
	a = a_;
	b = b_;
	c = a;
	d = b;
	A = 90;
	B = A;
	C = A;
	D = A;
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		throw FigureException("������ �������� ������. �������: ���� �� ����� �� ����� 90 ��������\n");
	}
	if (a != c || b != d ) {
		throw FigureException("������ �������� ������. �������: ������� a, c � b, d ������� �� �����\n");
	}
	if (a == b) {
		throw FigureException("������ �������� ������. �������: ������� a, c, b, d ������� �����, ��� �� �������������\n");
	}
}

Square::Square(double a_) {
	name = "�������";
	a = a_;
	b = a;
	c = a;
	d = a;
	A = 90;
	B = A;
	C = A;
	D = A;
	if (A != 90 || B != 90 || C != 90 || D != 90) {
		throw FigureException("������ �������� ������. �������: ���� �� ����� �� ����� 90 ��������\n");
	}
}

Parallelogram::Parallelogram(double a_, double b_, double A_, double B_) {
	name = "��������������";
	a = a_;
	b = b_;
	c = a;
	d = b;
	A = A_;
	B = B_;
	C = A;
	D = B;
	if (a != c || b != d) {
		throw FigureException("������ �������� ������. �������: ������� a, c � b, d ������� �� �����\n");
	}
	if (a == b) {
		throw FigureException("������ �������� ������. �������: ������� a, c, b, d �����, ��� �� ��������������\n");
	}
	if (A != C || B != D) {
		throw FigureException("������ �������� ������. �������: ���� A, C � B, D ������� �� �����\n");
	}
	if (A == 90 && C == 90 && B == 90 && D == 90) {
		throw FigureException("������ �������� ������. �������: ���� A, C, B, D ����� 90, ��� �� ��������������\n");
	}
	if (A + C + B + D != 360) {
		throw FigureException("������ �������� ������. �������: ����� ����� �� ����� 360\n");
	}
}

Rhombus::Rhombus(double a_, double A_, double B_) {
	name = "����";
	a = a_;
	b = a;
	c = a;
	d = a;
	A = A_;
	B = B_;
	C = A;
	D = B;
	if (a != b || a != c || a != d) {
		throw FigureException("������ �������� ������. �������: ������� a, c, b, d �� �����\n");
	}
	if (A != C || B != D) {
		throw FigureException("������ �������� ������. �������: ���� A, C � B, D ������� �� �����\n");
	}
	if (A == 90 && C == 90 && B == 90 && D == 90) {
		throw FigureException("������ �������� ������. �������: ���� A, C, B, D ����� 90, ��� �� ����\n");
	}
	if (A + C + B + D != 360) {
		throw FigureException("������ �������� ������. �������: ����� ����� �� ����� 360\n");
	}
}