#include "CPPM7_8_2.h"


void print_info(Figure* figure) {
	figure->get_info();
}

void CPPM7_8_2()
{
	try {
		Triangle triangle(10, 20, 30, 60, 50, 70);
		Figure* ptr_triangle = &triangle;
		print_info(ptr_triangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Triangle triangle(10, 20, 30, 90, 90, 90);
		Figure* ptr_triangle = &triangle;
		print_info(ptr_triangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		RightTriangle rightTriangle(10, 20, 30, 30, 60);
		Figure* ptr_rightTriangle = &rightTriangle;
		print_info(ptr_rightTriangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		RightTriangle rightTriangle(10, 20, 30, 20, 60);
		Figure* ptr_rightTriangle = &rightTriangle;
		print_info(ptr_rightTriangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		IsoscelesTriangle isoscelesTriangle(10, 20, 30, 120);
		Figure* ptr_isoscelesTriangle = &isoscelesTriangle;
		print_info(ptr_isoscelesTriangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		IsoscelesTriangle isoscelesTriangle(20, 20, 30, 60);
		Figure* ptr_isoscelesTriangle = &isoscelesTriangle;
		print_info(ptr_isoscelesTriangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		EquilateralTriangle equilateralTriangle(10, 60);
		Figure* ptr_equilateralTriangle = &equilateralTriangle;
		print_info(ptr_equilateralTriangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		EquilateralTriangle equilateralTriangle(10, 50);
		Figure* ptr_equilateralTriangle = &equilateralTriangle;
		print_info(ptr_equilateralTriangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}


	try {
		Quadrilateral quadrilateral(10, 20, 30, 40, 120, 120, 80, 40);
		Figure* ptr_quadrilateral = &quadrilateral;
		print_info(ptr_quadrilateral);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Quadrilateral quadrilateral(10, 20, 30, 40, 50, 90, 90, 90);
		Figure* ptr_quadrilateral = &quadrilateral;
		print_info(ptr_quadrilateral);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Rectangle rectangle(10, 20);
		Figure* ptr_rectangle = &rectangle;
		print_info(ptr_rectangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Rectangle rectangle(10, 10);
		Figure* ptr_rectangle = &rectangle;
		print_info(ptr_rectangle);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Parallelogram parallelogram(10, 20, 60, 120);
		Figure* ptr_parallelogram = &parallelogram;
		print_info(ptr_parallelogram);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Parallelogram parallelogram(10, 10, 90, 90);
		Figure* ptr_parallelogram = &parallelogram;
		print_info(ptr_parallelogram);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Rhombus rhombus(10, 60, 120);
		Figure* ptr_rhombus = &rhombus;
		print_info(ptr_rhombus);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}
	try {
		Rhombus rhombus(10, 90, 90);
		Figure* ptr_rhombus = &rhombus;
		print_info(ptr_rhombus);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}

}
