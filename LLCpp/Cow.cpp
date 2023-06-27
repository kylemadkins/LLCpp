#include <string>

#include "Cow.h"

Cow::Cow(int age, std::string name, CowType type) {
	this->age = age;
	this->name = name;
	this->type = type;
}

int Cow::getAge() {
	return this->age;
}

std::string Cow::getName() {
	return this->name;
}

CowType Cow::getType() {
	return this->type;
}
