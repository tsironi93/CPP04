#include "./AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::~AMateria() {}

AMateria &AMateria::operator=(AMateria const &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

AMateria::AMateria(AMateria const &src) : _type(src._type) {}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
