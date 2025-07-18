#ifndef DOG_HPP
#define DOG_HPP

#include "./Brain.hpp"
#include "Animal.hpp"

class Dog : public Animal {
	
	private:
		Brain *brain;

	public:
		Dog();
		Dog(const Dog &other);
		Dog &operator=(const Dog &other);
		~Dog();

		void makeSound() const override;
		void PrintIdeas() const;
		void setIdeas(std::string newIdea);
		void PrintOneIdea(int index) const;
		void setOneIdea(int index, const std::string &idea);
};

#endif // !#ifndef DOG_HPP
