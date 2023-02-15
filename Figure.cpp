#include "Figure.h"

void Figure::get_sides_count() {
	std::cout << name << ": " << sides_count << "\n";
}

void Figure::print_info() {
	std::cout << name << ":\n";
	if (check() == 1) {
		std::cout << "Правильная" << "\n";
	}
	std::cout << "Количество сторон: " << sides_count << "\n";
	std::cout << "\n";
}

bool Figure::check() {
	return 1;
}

void Figure::get_info() {
	std::cout << name << ":\n";
	std::cout << "Количество сторон: " << sides_count << "\n";
	std::cout << "\n";
}