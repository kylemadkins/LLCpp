#include <iostream>
#include <array>
#include <string>

#include "LLCpp.h"
#include "Cow.h"

int main()
{
	std::string name;
	std::cout << "Please enter your first name:" << '\n';
	std::cin >> name;
	std::cout << "Hello, " << name << '\n';

	std::array grades = { 95, 87, 63, 92, 99 };
	float sum = 0.0f;
	for (auto grade : grades) {
		sum += grade;
	}
	std::cout << sum / grades.size() << '\n';

	Cow cow = { 3, "Olive", Dairy };
	std::cout << cow.getName() << '\n';

	return 0;
}
