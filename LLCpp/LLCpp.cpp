#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <fstream>

#include "LLCpp.h"
#include "Cow.h"
#include "StudentRecords.h"

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

	std::array numbers = { 95, 87, 63, 92, 99 };
	float sum = 0.0f;
	for (auto n : numbers)
	{
		sum += n;
	}
	std::cout << sum / numbers.size() << '\n';

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

	std::vector students = { Student(1, "Kyle"), Student(2, "Stella") };
	std::vector courses = { Course(1, "Math", 3) };
	std::ifstream file;
	file.open("grades.txt");
	if (file.fail())
	{
		std::cout << "grades.txt not found!" << std::endl;
	}
	else
	{
		std::string line;
		while (!file.eof())
		{
			getline(file, line);
			std::cout << line << '\n';
		}
		file.close();
	}

	return 0;
}
