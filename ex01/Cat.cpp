#include "./Cat.hpp"
#include <iostream>
#include "./AnsiColors.hpp"

Cat::Cat() : Animal("Cat") {
	std::cout << BOLD << "Cat default constructor called" << RESET << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other) {
	std::cout << BOLD << BLUE << "Cat copy constructor called" << RESET << std::endl;
}

Cat &Cat::operator=(const Cat &other) {
	std::cout << BOLD << "Cat assignment operator called" << RESET << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Cat::~Cat() {
	std::cout << BOLD << RED << "Cat destructor called" << RESET << std::endl;
}

void Cat::makeSound() const {
	std::cout << BOLD << YELLOW << "MEOW MEOW!" << RESET << std::endl;
	std::cout << BOLD << CYAN << "\n\n" <<
		" /// //_.-'    .-/\";  `        ``<._  ``.''_ `. / // /\n"
		"///_.-' _..--.'_    \\                    `( ) ) // //\n"
		"/ (_..-' // (< _     ;_..__               ; `' / ///\n"
		" / // // //  `-._,_)' // / ``--...____..-' /// / //\n" << std::endl;
}
