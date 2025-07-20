#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "./Brain.hpp"

class Cat : public Animal {
	
	private:
		Brain *brain;


	public:
		Cat();
		Cat(const Cat &other);
		Cat &operator=(const Cat &other);
		~Cat();

		void makeSound() const override;
		void PrintIdeas() const;
		void setIdeas(std::string newIdea);
		void PrintOneIdea(int index) const;
		void setOneIdea(int index, const std::string &idea);
};

#endif // !#ifndef CAT_HPP
