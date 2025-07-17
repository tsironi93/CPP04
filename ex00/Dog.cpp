#include "./Dog.hpp"
#include <iostream>
#include "./AnsiColors.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << BOLD << "Dog default constructor called" << RESET << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << BOLD << BLUE << "Dog copy constructor called" << RESET << std::endl;
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << BOLD << "Dog assignment operator called" << RESET << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << BOLD << RED << "Dog destructor called" << RESET << std::endl;
}

void Dog::makeSound() const {
	std::cout << BOLD << YELLOW << "Woof! Woof!" << RESET << std::endl;
	std::cout << BOLD << CYAN << "\n\n"
			  << "       ''',     \n" <<
				 "    o_)O \\)____)\n" <<
				 "     \\_        )\n" <<
				 "woof!  '',,,,,,\n" <<
				 "         ||  ||\n" <<
				 "        \"--'\"--'\n" << std::endl;
}
