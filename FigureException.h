#pragma once
#include <iostream>

class FigureException : public std::runtime_error {
public:
	FigureException(std::string error) : std::runtime_error(error) {

	}
};