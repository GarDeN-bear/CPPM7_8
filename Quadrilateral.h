#pragma once
#include "Figure.h"
#include "FigureException.h"

// ����� ��������������
class Quadrilateral : public Figure {
public:
	Quadrilateral();
	Quadrilateral(double a_, double b_, double c_, double d_, double A_, double B_, double C_, double D_);
	void get_info() override;

	virtual void print_info() override;
	virtual bool check() override;
protected:
	double a, b, c, d;
	double A, B, C, D;
};

//�������������
class Rectangle : public Quadrilateral {
public:
	Rectangle(double a_, double b_);
};

//�������
class Square : public Quadrilateral {
public:
	Square(double a_);
};

// ��������������
class Parallelogram : public Quadrilateral {
public:
	Parallelogram(double a_, double b_, double A_, double B_);
};

//����
class Rhombus : public Quadrilateral {
public:
	Rhombus(double a_, double A_, double B_);
};