#include "CPPM7_8_2.h"


void print_info(Figure* figure) {
	figure->get_info();
}

void CPPM7_8_2()
{
	try {
		Quadrilateral quadrilateral(10, 20, 30, 40, 90, 90, 90, 90);
		Figure* ptr_quadrilateral = &quadrilateral;
		print_info(ptr_quadrilateral);
	}
	catch (std::exception& ex) {
		std::cout << ex.what() << "\n";
	}

}
