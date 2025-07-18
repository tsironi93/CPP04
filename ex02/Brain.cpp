#include "./Brain.hpp"
#include <iostream>
#include "./AnsiColors.hpp"

Brain::Brain() {
	std::cout << BOLD << "Brain has been created empty" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = "No idea";
	}
}

Brain::Brain(std::string ideas) {
	std::cout << BOLD << "Brain has been created full of ideas" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = ideas;
	}
}

Brain::Brain(const Brain &other) {
	std::cout << BOLD << "Brain has been copied" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = other.ideas[i];
	}
}

Brain &Brain::operator=(const Brain &other) {
	std::cout << BOLD << "Brain has been assigned" << RESET << std::endl;
	if (this != &other) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = other.ideas[i];
		}
	}
	return *this;
}

Brain::~Brain() {
	std::cout << BOLD << RED << "BrainRoooooot has been called" << RESET << std::endl;
}

void Brain::PrintIdeas() const {
	std::cout << BOLD << YELLOW << "Brain ideas:" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		std::cout << BOLD << YELLOW << "Idea " << i + 1 << ": " << RESET << this->ideas[i] << std::endl;
	}
}

void Brain::setIdias(std::string &newIdea) {
	std::cout << BOLD << "Setting ideas in Brain" << RESET << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = newIdea;
	}
	std::cout << BOLD << "Ideas have been set." << RESET << std::endl;
}

void Brain::PrintOneIdea(int index) const {
	if (index < 0 || index >= 100) {
		std::cout << "Index out of bounds." << std::endl;
		return;
	}
	std::cout << BOLD << YELLOW << "Brain's idea at index " << index << ": " << RESET << this->ideas[index] << std::endl;
}

void Brain::setOneIdea(int index, const std::string &idea) {
	if (index < 0 || index >= 100) {
		std::cout << "Index out of bounds." << std::endl;
		return;
	}
	this->ideas[index] = idea;
	std::cout << BOLD << "Brain's idea at index " << index << " has been set to: " << RESET << idea << std::endl;
}
