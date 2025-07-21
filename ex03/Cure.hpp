#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria {

	public:
		Cure();
		Cure &operator=(const Cure &other);
		virtual ~Cure();

		virtual AMateria *clone() const override;
		virtual void use(ICharacter &target) override;
};

#endif // !#ifndef CURE_HPP
