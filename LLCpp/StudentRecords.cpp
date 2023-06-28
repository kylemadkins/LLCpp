#include <string>

#include "StudentRecords.h"

Student::Student(int id, std::string name)
{
	this->id = id;
	this->name = name;
}

int Student::getId() const
{
	return this->id;
}

std::string Student::getName() const
{
	return this->name;
}

Course::Course(int id, std::string name, int credits)
{
	this->id = id;
	this->name = name;
	this->credits = credits;
}

int Course::getId() const
{
	return this->id;
}

std::string Course::getName() const
{
	return this->name;
}

int Course::getCredits() const
{
	return this->credits;
}

Grade::Grade(Student& student, Course& course, int grade)
{
	this->student = student;
	this->course = course;
	this->grade = grade;
}

Student& Grade::getStudent()
{
	return this->student;
}

Course& Grade::getCourse()
{
	return this->course;
}

int Grade::getGrade() const
{
	return this->grade;
}
