#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"
#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"
#include <iostream>

int main(void) {
  // Animal a("Apple");
  // Animal b;
  // 	b = a;
  //
  // a.makeSound();
  // std::cout << a.getType() << std::endl;
  //
  //
  // Dog d;
  // d.makeSound();
  //
  // Cat c;
  // c.makeSound();

  const Animal *meta = new Animal();
  const Animal *j = new Dog();
  const Animal *i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound(); // will output the cat sound!
  j->makeSound();
  meta->makeSound();

  const WrongAnimal *wa = new WrongAnimal();
  wa->makeSound(); // ➜ WrongAnimal sound

  const WrongAnimal *wc = new WrongCat();
  wc->makeSound(); // ➜ WRONG: Still prints WrongAnimal sound if no virtual

  delete meta;
  delete j;
  delete i;
  return 0;
}
