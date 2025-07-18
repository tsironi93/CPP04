#include "./Dog.hpp"
#include <iostream>
#include "./AnsiColors.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal("Dog") {
	std::cout << BOLD << "Dog default constructor called" << RESET << std::endl;
	brain = new Brain();
}

Dog::Dog(const Dog &other) : Animal(other) {
	std::cout << BOLD << BLUE << "Dog copy constructor called" << RESET << std::endl;
	brain = new Brain(*other.brain);
}

Dog &Dog::operator=(const Dog &other) {
	std::cout << BOLD << "Dog assignment operator called" << RESET << std::endl;
	if (this != &other) {
		Animal::operator=(other);
	}
	return *this;
}

Dog::~Dog() {
	delete brain;
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

void Dog::PrintIdeas() const
{
	 if (brain)
		 brain->PrintIdeas();
	 else
		 std::cout << "No brain available." << std::endl;
}

void Dog::setIdeas(std::string newIdea) {
    std::cout << "Dog setting brain ideas...\n";
    brain->setIdias(newIdea);
}

void Dog::PrintOneIdea(int index) const {
	this->brain->PrintOneIdea(index);
}

void Dog::setOneIdea(int index, const std::string &idea) {
	this->brain->setOneIdea(index, idea);
}
