#include "./WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat() : type("Wrong Cat") {
  std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
  std::cout << "WrongCat deconstructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) {
  std::cout << "Copy constructor called" << std::endl;
  type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other) {
  std::cout << "Assignment operator called" << std::endl;
  if (this != &other)
    type = other.type;
  return *this;
}

void WrongCat::makeSound() const {
  std::cout << "Wrong meowwwww!" << std::endl;
}
