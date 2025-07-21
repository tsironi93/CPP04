#include "./AMateria.hpp"
#include <iostream>

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
	return _type;
}

void AMateria::use(ICharacter &target) {
	(void)target; // Avoid unused parameter warning
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
