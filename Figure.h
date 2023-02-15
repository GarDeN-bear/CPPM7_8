#pragma once
#include <iostream>
#include "FigureException.h"

// Класс фигура
class Figure {
public:
	void get_sides_count();
	virtual void print_info();
	virtual bool check();
	virtual void get_info();
protected:
	std::string name = "Фигура";
	int sides_count = 0;
};