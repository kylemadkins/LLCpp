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
	Student(int id, std::string name) : id(id), name(name) {}
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
	Course(int id, std::string name, int credits) : id(id), name(name), credits(credits) {}
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
	Grade(Student& student, Course& course, int grade) : student(student), course(course), grade(grade) {}
	Student& getStudent();
	Course& getCourse();
	int getGrade() const;
};
