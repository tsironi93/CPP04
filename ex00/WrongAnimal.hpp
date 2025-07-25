#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {

private:
  std::string type;

public:
  WrongAnimal();
  ~WrongAnimal();
  WrongAnimal(const WrongAnimal &other);
  WrongAnimal &operator=(const WrongAnimal &other);

  void makeSound() const;
};

#endif // !WRONGANIMAL_HPP
