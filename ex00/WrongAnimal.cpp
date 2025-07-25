#include "./WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
  std::cout << "Copy contructor called for WrongAnimal" << std::endl;
  type = other.type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &other)
    this->type = other.type;
  return *this;
}

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal sound" << std::endl;
}
