
#include "./Animal.hpp"
#include <iostream>
#include "./AnsiColors.hpp"

// Animal::Animal() : type("Animal") {
// 	std::cout << BOLD << "Animal default constructor called"
// 		<< RESET << std::endl;
// }

Animal::Animal(const std::string &type) : type(type) {
	std::cout << BOLD << "Animal parameterized constructor called with type: "
	          << type << RESET << std::endl;
}

// Animal::Animal(const Animal &other) : type(other.type) {
// 	std::cout << BOLD << BLUE << "Animal copy constructor called with type: "
// 	          << other.type << RESET << std::endl;
// }

Animal::~Animal() {
	std::cout << BOLD << RED << "Animal destructor called for type: "
	          << type << RESET << std::endl;
}

// Animal &Animal::operator=(const Animal &other)
// {
// 	std::cout << BOLD << "Animal assignment operator called for type: "
// 	          << other.type << RESET << std::endl;
// 	if (this != &other)
// 	{
// 		type = other.type;
// 	}
// 	return *this;
// }

std::string Animal::getType() const
{
	return type;
}

void Animal::makeSound() const
{
	std::cout << BOLD << YELLOW << "Animal sound" << std::endl;
}
