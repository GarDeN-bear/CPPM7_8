#include "CPPM7_8_1.h"

class bad_length : public std::exception {
public:
	const char* what() const override {
		return "Вы ввели слово запретной длины! До свидания";
	}
};

int function(std::string str, int forbidden_length);

void CPPM7_8_1() {
	std::string str;
	int forbidden_length;
	std::cout << "Введите запретную длину: ";
	std::cin >> forbidden_length;
	try {
		while (true) {
			std::cout << "Введите слово: ";
			std::cin >> str;
			std::cout << "Длина слова " << '"' << str << '"' << " равна " << function(str, forbidden_length) << "\n";
		}
	} catch (std::exception& ex) {
			std::cout << ex.what();
	}
}

int function(std::string str, int forbidden_length) {
	if (str.length() == forbidden_length)
		throw bad_length();
	return str.length();
}