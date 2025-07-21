#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <string>

class AMateria;

class ICharacter {

	public:
		ICharacter() = delete;
		ICharacter(const ICharacter &src) = delete;
		ICharacter &operator=(const ICharacter &rhs) = delete;
		ICharacter(const std::string &name) = delete;
		virtual ~ICharacter() {}

		virtual const std::string &getName() const = 0;
		virtual void equip(AMateria *m) = 0;
		virtual void unequip(int idx) = 0;
		virtual void use(int idx, ICharacter &target) = 0;
};

#endif // !#ifndef ICHARACTER_HPP
