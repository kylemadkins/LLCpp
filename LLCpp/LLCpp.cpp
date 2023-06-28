#include <iostream>
#include <array>
#include <string>
#include <vector>

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

	Student kyle = { 1, "Kyle" };
	Student stella = { 2, "Stella" };
	Course math = { 1, "Calculus I", 3 };
	Grade kgrade = { kyle, math, 93 };
	Grade sgrade = { stella, math, 51 };
	std::vector<Grade> grades = { kgrade, sgrade };
	for (auto& grade : grades)
	{
		Student student = grade.getStudent();
		Course course = grade.getCourse();
		std::cout << student.getName() << " has a grade of " << grade.getGrade() << " in " << course.getName() << '\n';
	}

	return 0;
}
