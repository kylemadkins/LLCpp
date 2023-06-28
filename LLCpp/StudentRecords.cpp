#include <string>

#include "StudentRecords.h"

int Student::getId() const
{
	return this->id;
}

std::string Student::getName() const
{
	return this->name;
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
