#ifndef COW_H
#define COW_H

#include <string>

enum CowType { Dairy, Meat, Pet };

class Cow
{
private:
	int age;
	std::string name;
	CowType type;
public:
	Cow(int age, std::string name, CowType type);
	int getAge();
	std::string getName();
	CowType getType();
};

#endif
