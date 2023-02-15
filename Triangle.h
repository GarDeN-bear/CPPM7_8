#pragma once
#include <iostream>
#include "Figure.h"

// ����� �����������
class Triangle : public Figure {
public:
	Triangle();
	Triangle(double a_, double b_, double c_, double A_, double B_, double C_);
	void get_info() override;
	virtual void print_info() override;
	virtual bool check() override;
protected:
	double a, b, c;
	double A, B, C;
};

//������������� �����������
class RightTriangle : public Triangle {
public:
	RightTriangle(double a_, double b_, double c_, double A_, double B_);
};

//�������������� �����������
class IsoscelesTriangle : public Triangle {
public:
	IsoscelesTriangle(double a_, double b_, double A_, double B_);
};

//�������������� �����������
class EquilateralTriangle : public Triangle {
public:
	EquilateralTriangle(double a_, double A_);
};