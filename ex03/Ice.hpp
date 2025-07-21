#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria {

	public:

		Ice();
		Ice(const Ice &src);
		Ice &operator=(const Ice &other);
		AMateria *clone() const override;
		void use(ICharacter &target) override;
};

#endif // !DEBUG
