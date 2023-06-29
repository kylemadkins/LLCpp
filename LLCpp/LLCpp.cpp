#include <iostream>
#include <array>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <algorithm>

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

	std::vector<Student> students = { Student(1, "Kyle"), Student(2, "Stella"), Student(3, "Matt")};
	std::vector<Course> courses = { Course(1, "Calculus I", 3), Course(2, "Organic Chemistry I", 3)};
	std::vector<Grade> grades;
	std::ifstream file;
	file.open("grades.txt");
	if (file.fail())
	{
		std::cout << "grades.txt not found!" << std::endl;
	}
	else
	{
		std::string line;
		while (getline(file, line))
		{
			std::stringstream ss(line);
			int el;
			std::vector<int> data;
			while (ss >> el) {
				data.push_back(el);
			}

			if (data.size() == 3)
			{
				auto sit = std::find_if(students.begin(), students.end(), [&data](const Student& s) {
					return s.getId() == data[0];
				});

				auto cit = std::find_if(courses.begin(), courses.end(), [&data](const Course& c) {
					return c.getId() == data[1];
				});

				if (sit != students.end() && cit != courses.end())
				{
					Student& student = *sit;
					Course& course = *cit;
					grades.push_back(Grade(student, course, data[2]));
				}
			}
			else
			{
				std::cout << "File is incorrectly formatted" << '\n';
			}
		}
		file.close();
	}

	for (auto& grade : grades)
	{
		Student student = grade.getStudent();
		Course course = grade.getCourse();
		std::cout << student.getName() << " has a grade of " << grade.getGrade() << " in " << course.getName() << '\n';
	}

	return 0;
}
