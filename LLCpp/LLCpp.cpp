#include <iostream>
#include <array>
#include <string>

#include "LLCpp.h"
#include "Cow.h"

void changeFirstChar(std::string& str, char first)
{
	str[0] = first;
}

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

	int a = 100;
	int* aptr = &a;
	std::cout << a << '\n';
	std::cout << aptr << '\n';
	std::cout << *aptr << '\n';

	Cow* anotherCow = new Cow(2, "Julia", Pet);
	std::cout << anotherCow->getName() << " is " << anotherCow->getAge() << " years old" << '\n';
	delete anotherCow;

	std::string str = "Cat";
	changeFirstChar(str, 'P');
	std::cout << str << '\n';

	return 0;
}
