#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class AMateria {
	private:
		std::string _type;

	public:
		AMateria() = delete;
		AMateria(const AMateria &src);
		virtual AMateria &operator=(const AMateria &rhs);
		virtual ~AMateria();

		AMateria(const std::string &type);

		const std::string &getType() const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif // !#ifndef AMATERIA_HPP
