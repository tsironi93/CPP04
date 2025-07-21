#include "./Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice") {}

AMateria *Ice::clone() const {
	return new Ice(*this);
}

Ice::Ice(const Ice &src) : AMateria(src) {}

Ice &Ice::operator=(const Ice &other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

void Ice::use(ICharacter &target) {
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
