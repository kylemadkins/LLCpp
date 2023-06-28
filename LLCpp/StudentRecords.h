#ifndef STUDENT_RECORDS_H
#define STUDENT_RECORDS_H
#endif

#include <string>

class Student
{
private:
	int id;
	std::string name;

public:
	Student(int id = 0, std::string name = "");
	int getId() const;
	std::string getName() const;
};

class Course
{
private:
	int id;
	std::string name;
	int credits;

public:
	Course(int id = 0, std::string name = "", int credits = 0);
	int getId() const;
	std::string getName() const;
	int getCredits() const;
};

class Grade
{
private:
	Student student;
	Course course;
	int grade;

public:
	Grade(Student& student, Course& course, int grade);
	Student& getStudent();
	Course& getCourse();
	int getGrade() const;
};
