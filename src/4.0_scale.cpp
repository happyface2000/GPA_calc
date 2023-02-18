#include "4.0_scale.h"
#include <iostream>
#include <iomanip>

CalculateFourscale::CalculateFourscale(std::vector<int> list) {
	int calc = 0;
	double scale;
	for (auto i = list.begin(); i != list.end(); ++i)
		calc += *i;

	calc = calc / list.size();

	if (calc > 96) {
		scale = 4.0;
	}
	else if (calc > 92) {
		scale = 3.7;
	}
	else if (calc > 89) {
		scale = 3.3;
	}
	else if (calc > 86) {
		scale = 3.0;
	}
	else if (calc > 82) {
		scale = 2.7;
	}
	else if (calc > 79) {
		scale = 2.3;
	}
	else if (calc > 76) {
		scale = 2.0;
	}
	else if (calc > 72) {
		scale = 1.7;
	}
	else if (calc > 69) {
		scale = 1.3;
	}
	else if (calc > 66) {
		scale = 1;
	}
	else{
		scale = 0.0;
	}


	std::cout << "Your grades are ";
	for (auto i = list.begin(); i != list.end(); ++i)
		std::cout << *i << " ";

	std::cout << "\nYour GPA on a 4.0 scale is: ";
	std::cout << std::setprecision(1)  << std::fixed << scale;
}



CalculateHundredscale::CalculateHundredscale(std::vector<int> list) {
	int calc = 0;
	for (auto i = list.begin(); i != list.end(); ++i)
		calc += *i;

	calc = calc / list.size();

	std::cout << "Your grades are ";
	for (auto i = list.begin(); i != list.end(); ++i)
		std::cout << *i << " ";



	std::cout << "\nYour GPA on a 100 scale is: ";
	std::cout << calc;
}