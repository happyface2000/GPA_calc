#include <iostream>
#include <string>
#include "4.0_scale.h"

int main(){

	std::string scale, input;
	std::vector<int> grades;

	std::cout << "Hello I am a GPA calculator\n";
	std::cout << "Would you like to calculate on a 4.0 scale or 100 point scale?" << std::endl;
	getline(std::cin, scale);
	
	if (scale == "4.0 scale") {
		std::cout << "4.0 scale registered.\n";
		std::cout << "Enter grades in number format, type STOP to stop input\n";

		while (int e = 1) {
			std::cin >> input;

			if (input == "STOP")
				break;
			else {
				grades.push_back(std::stoi(input));
			}
		}
		CalculateFourscale CalculateFourscale(grades);
	}



	else if (scale == "100 point scale") {
		std::cout << "100 point scale registered.\n";
		std::cout << "Enter grades in number format, type STOP to stop input\n";

		while (int e = 1) {
			std::cin >> input;

			if (input == "STOP")
				break;
			else {
				grades.push_back(std::stoi(input));
			}
		}
		CalculateHundredscale CalculateHundredscale(grades);

	}
	else{
		std::cout << "Invalid scale\n";
		std::cout << scale;
	}

	return 0;
}